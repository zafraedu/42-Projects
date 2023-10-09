#include "../include/philo.h"

static void	ft_msleep(time_t ms);
static void	ft_finish_eating(t_philo *p);
static int	ft_eating(t_philo *p);
static int	take_fork(char s, int a, int b);

/**
 * Rutina principal de ejecución para los filósofos.
 *
 * Esta función representa la rutina principal de ejecución para un filósofo.
 * En primer lugar, verifica si el filósofo tiene un identificador impar y, en
 * ese caso, muestra el estado "THINKING" y espera durante un período de tiempo
 * especificado para evitar el bloqueo mutuo. Luego, el filósofo entra en un
 * bucle infinito en el que alternativamente intenta comer y pensar. El bucle se
 * rompe si el filósofo fallece o si termina sus comidas requeridas
 * (si se aplica).
 *
 * @param arg Puntero a la estructura de filósofo (t_philo).
 * @return NULL al finalizar la rutina de ejecución del filósofo.
 */
void	*p_routine(void *arg)
{
	t_philo	*philo;

	philo = (t_philo *)arg;
	if (philo->id % 2)
	{
		ft_print(philo, THINKING);
		ft_msleep(philo->simu->time_eat);
	}
	while (1)
	{
		if (is_died(philo, 0))
			break ;
		if (ft_eating(philo))
			break ;
		ft_print(philo, THINKING);
		ft_msleep(philo->simu->time_thk);
	}
	return (NULL);
}

/**
 *  Pausa la ejecución del programa durante (ms) milisegundos.
 *
 * Esta función suspende la ejecución del programa durante el período de tiempo
 * especificado en milisegundos (ms) utilizando una implementación de pausa
 * que minimiza el uso de CPU. La función realiza un bucle hasta que haya
 * transcurrido el tiempo deseado.
 *
 * @param ms El tiempo en milisegundos durante el cual se debe suspender
 *           la ejecución;
 */
static void	ft_msleep(time_t ms)
{
	time_t	time;

	time = get_time();
	while (get_time() - time < ms)
		usleep(ms * 10);
}

/**
 * Intenta que el filósofo coma.
 *
 * Esta función representa el intento de un filósofo de tomar los tenedores
 * necesarios y comenzar a comer. El filósofo bloquea dos mutexes
 * correspondientes a los tenedores que necesita para comer. Luego, muestra el
 * estado "GOT_FORK" dos veces para indicar que ha tomado los tenedores. Si el
 * filósofo ha tomado el mismo tenedor (ambos índices son iguales), libera el
 * tenedor y retorna un valor para indicar que no pudo comer. En caso contrario,
 * si ha tomado ambos tenedores necesarios, muestra el estado "EATING" y
 * actualiza el tiempo de la última comida y el número de comidas. Luego,
 * verifica si el filósofo ha terminado todas sus comidas requeridas y, si es
 * así, finaliza su comida. Finalmente, espera durante un período de tiempo
 * especificado para simular el acto de comer y luego finaliza la comida.
 * La función retorna 1 si el filósofo comió con éxito y 0 si no pudo comer.
 *
 * @param p Puntero a la estructura de filósofo (t_philo).
 * @return 1 si el filósofo come con éxito, 0 si no pudo comer.
 */
static int	ft_eating(t_philo *p)
{
	pthread_mutex_lock(&p->fork[take_fork('m', p->f[0], p->f[1])]);
	ft_print(p, GOT_FORK);
	if (p->f[0] == p->f[1])
	{
		pthread_mutex_unlock(&p->fork[take_fork('m', p->f[0], p->f[1])]);
		return (1);
	}
	pthread_mutex_lock(&p->fork[take_fork('M', p->f[0], p->f[1])]);
	ft_print(p, GOT_FORK);
	ft_print(p, EATING);
	pthread_mutex_lock(&p->simu->mutex[M_MEAL]);
	p->last_meal = get_time();
	p->time_ate++;
	pthread_mutex_unlock(&p->simu->mutex[M_MEAL]);
	if (is_done(p, 0))
		return (ft_finish_eating(p), 1);
	ft_msleep(p->simu->time_eat);
	return (ft_finish_eating(p), 0);
}

/**
 * Finaliza el acto de comer de un filósofo y simula el estado de "SLEEPING".
 *
 * Esta función se encarga de liberar los tenedores (forks) que un filósofo ha
 * tomado durante el acto de comer. Luego, muestra el estado "SLEEPING" para
 * indicar que el filósofo está dormiendo. Después, simula el período de sueño
 * esperando durante un tiempo específico antes de retornar. Esta función se
 * llama al finalizar el acto de comer de un filósofo.
 *
 * @param p Puntero a la estructura de filósofo (t_philo).
 */
static void	ft_finish_eating(t_philo *p)
{
	pthread_mutex_unlock(&p->fork[take_fork('M', p->f[0], p->f[1])]);
	pthread_mutex_unlock(&p->fork[take_fork('m', p->f[0], p->f[1])]);
	ft_print(p, SLEEPING);
	ft_msleep(p->simu->time_slp);
}

/**
 * Determina cuál de dos tenedores tomará un filósofo.
 *
 * Esta función se utiliza para determinar cuál de dos tenedores, identificados
 * por los índices 'a' y 'b', debe tomar un filósofo. El parámetro 's' indica si
 * el filósofo desea tomar el tenedor "Mayor" ('M') o el tenedor "Menor" ('m').
 * Dependiendo de la elección ('M' o 'm'), la función compara los índices 'a' y
 * 'b' y retorna el índice del tenedor que el filósofo debería tomar. Si 's' es
 * igual a 'M', se selecciona el índice mayor de 'a' y 'b'. Si 's' es igual a
 * 'm', se selecciona el índice menor de 'a' y 'b'. Esta función ayuda a evitar
 * el bloqueo mutuo entre los filósofos que compiten por los tenedores.
 *
 * @param s Carácter que indica que tenedor tomar "Mayor" ('M') o "Menor" ('m').
 * @param a Índice del primer tenedor.
 * @param b Índice del segundo tenedor.
 * @return Índice del tenedor seleccionado por el filósofo.
 */
static int	take_fork(char s, int a, int b)
{
	if (s == 'M')
	{
		if (a > b)
			return (a);
		return (b);
	}
	else
	{
		if (a < b)
			return (a);
		return (b);
	}
}
