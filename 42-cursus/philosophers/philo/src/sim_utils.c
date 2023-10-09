#include "../include/philo.h"

static int	ft_strcmp(const char *s1, const char *s2);

/**
 * Imprime el estado de un filósofo en la simulación.
 *
 * Esta función se utiliza para imprimir el estado actual de un filósofo en la
 * simulación, incluyendo su identificador, el tiempo transcurrido y el estado
 * (por ejemplo, "GOT_FORK", "EATING", "SLEEPING", "THINKING" o "DIED").
 * La función bloquea un mutex de impresión antes de mostrar el mensaje para
 * evitar conflictos de impresión entre los filósofos. Luego, desbloquea el
 * mutex para permitir que otros filósofos impriman su estado.
 *
 * @param p Puntero a la estructura de filósofo (t_philo).
 * @param s Cadena que representa el estado del filósofo a imprimir.
 * @var printf("%li %d %s\n", time, p_id, s);
 */
void	ft_print(t_philo *p, char *s)
{
	int		p_id;
	time_t	time;

	p_id = p->id + 1;
	time = get_time() - p->simu->time_start;
	pthread_mutex_lock(&p->simu->mutex[M_PRINT]);
	if (ft_strcmp(s, DIED) == 0)
		printf(" ║ \033[31m%4li ║ %2i ║ %s\033[0m\t\t ║ \n", time, p_id, s);
	if (!is_died(p, 0) && !is_done(p, 0))
	{
		if (ft_strcmp(s, GOT_FORK) == 0 && time > 9999)
			printf(" ║ %04li ║ %.2i ║ \033[33m%s\033[0m ║\n", time, p_id, s);
		else if (ft_strcmp(s, GOT_FORK) == 0)
			printf(" ║ %04li ║ %.2i ║ \033[33m%s\033[0m\t ║\n", time, p_id, s);
		if (ft_strcmp(s, EATING) == 0)
			printf(" ║ %.4li ║ %.2i ║ \033[32m%s\033[0m\t ║\n", time, p_id, s);
		if (ft_strcmp(s, SLEEPING) == 0)
			printf(" ║ %.4li ║ %.2i ║ \033[35m%s\033[0m\t ║\n", time, p_id, s);
		if (ft_strcmp(s, THINKING) == 0)
			printf(" ║ %.4li ║ %.2i ║ \033[34m%s\033[0m\t ║\n", time, p_id, s);
	}
	pthread_mutex_unlock(&p->simu->mutex[M_PRINT]);
}

/**
 * Verifica si un filósofo ha fallecido o marca la simulación como "died".
 *
 * Esta función se utiliza para verificar si un filósofo ha fallecido o para
 * marcar la simulación completa como "died" si se proporciona el valor 'n'
 * igual a 1. Cuando 'n' es igual a 1, se marca la simulación como "died", lo
 * que indica que al menos un filósofo ha fallecido. Si la simulación está
 * marcada como "died", la función retorna 1, indicando que la simulación debe
 * detenerse.
 *
 * @param philo Puntero a la estructura de filósofo (t_philo).
 * @param n Valor entero que indica si se debe marcar la simulación como "died"
 *          (1 para marcar, 0 para verificar).
 * @return 1 si la simulación está marcada como "died", 0 si no lo está.
 */
int	is_died(t_philo *philo, int n)
{
	pthread_mutex_lock(&philo->simu->mutex[M_DIED]);
	if (n)
		philo->simu->died = 1;
	if (philo->simu->died)
	{
		pthread_mutex_unlock(&philo->simu->mutex[M_DIED]);
		return (1);
	}
	pthread_mutex_unlock(&philo->simu->mutex[M_DIED]);
	return (0);
}

/**
 * Verifica si la simulación se ha completado o marca la simulación como "done".
 *
 * Esta función se utiliza para verificar si la simulación se ha completado o
 * para marcar la simulación completa como "done" si se proporciona el valor 'n'
 * igual a 1. Cuando 'n' es igual a 1, se marca la simulación como "done". Si la
 * simulación está marcada como "done", la función retorna 1, indicando que la
 * simulación ha finalizado. Esto permite que los filósofos se detengan una vez
 * que la simulación esté completa.
 *
 * @param philo Puntero a la estructura de filósofo (t_philo) que se verifica.
 * @param n Valor entero que indica si se debe marcar la simulación como "done"
 *          (1 para marcar, 0 para verificar).
 * @return 1 si la simulación está marcada como "done", 0 si no lo está.
 */
int	is_done(t_philo *philo, int n)
{
	pthread_mutex_lock(&philo->simu->mutex[M_DONE]);
	if (n)
		philo->simu->done = 1;
	if (philo->simu->done)
	{
		pthread_mutex_unlock(&philo->simu->mutex[M_DONE]);
		return (1);
	}
	pthread_mutex_unlock(&philo->simu->mutex[M_DONE]);
	return (0);
}

/**
 * Compara dos cadenas de caracteres.
 *
 * Compara cada carácter correspondiente de ambas cadenas hasta encontrar una
 * diferencia o hasta llegar al final de alguna de las cadenas.
 *
 * @param s1 Puntero a la primera cadena de caracteres a comparar;
 * @param s2 Puntero a la segunda cadena de caracteres a comparar;
 * @return Un valor negativo si `s1` es menor que `s2`, un valor positivo si
 *         `s1` es mayor que `s2`, y 0 si son iguales
 */
static int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
