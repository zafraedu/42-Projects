/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simulation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:48:48 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/10 15:48:49 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

static void	check_stop_routine(t_philo *philo, t_simu *simu);
static int	ft_are_done(t_philo *philo, t_simu *simu);
static void	destroy_mutexes(t_philo *philo, t_simu *simu);

/**
 * Inicia y controla la simulación de los filósofos.
 *
 * Crea un conjunto de hilos (threads) para representar a cada filósofo y los
 * inicia llamando a la función p_routine. Luego, ejecuta la función
 * check_stop_routine para monitorear la simulación y detenerla cuando sea
 * necesario. Finalmente, espera a que todos los hilos de los filósofos terminen
 * y luego libera los recursos, incluyendo los mutexes. La función retorna 0 si
 * la simulación se ejecuta con éxito y 1 en caso de error.
 *
 * @param philo Puntero a la estructura de filósofos (t_philo).
 * @param simu  Puntero a la estructura de simulación (t_simu).
 * @return 0 si la simulación se ejecuta con éxito, 1 en caso de error.
 */
int	ft_simulation(t_philo *philo, t_simu *simu)
{
	int			i;
	pthread_t	*th;

	th = malloc(sizeof(pthread_t) * (size_t)simu->nb_philo);
	if (th == NULL)
		return (1);
	i = -1;
	while (++i < simu->nb_philo)
	{
		if (pthread_create(&th[i], NULL, p_routine, &philo[i]))
		{
			while (i--)
				pthread_join(th[i], NULL);
			return (free(th), 1);
		}
	}
	check_stop_routine(philo, simu);
	i = -1;
	while (++i < simu->nb_philo)
		if (pthread_join(th[i], NULL))
			return (1);
	return (destroy_mutexes(philo, simu), free(th), 0);
}

/**
 * Controla el estado de la simulación y detiene el programa si es necesario.
 *
 * Comprueba si un filósofo ha superado el tiempo máximo sin comer y marca la
 * simulación como finalizada. También verifica si un filósofo ha superado el
 * tiempo máximo de inactividad y lo marca como fallecido. La función monitorea
 * continuamente el estado de los filósofos hasta que se cumple alguna de las
 * condiciones de finalización.
 *
 * @param philo Puntero a la estructura de filósofos (t_philo).
 * @param simu  Puntero a la estructura de simulación (t_simu).
 */
static void	check_stop_routine(t_philo *philo, t_simu *simu)
{
	int		i;
	time_t	last_meal;

	i = 0;
	while (1)
	{
		pthread_mutex_lock(&simu->mutex[M_MEAL]);
		last_meal = philo[i].last_meal;
		pthread_mutex_unlock(&simu->mutex[M_MEAL]);
		if (last_meal && ft_are_done(philo, simu))
		{
			is_done(philo, 1);
			break ;
		}
		if (last_meal && get_time() - last_meal > simu->time_die)
		{
			is_died(philo, 1);
			ft_print(&philo[i], DIED);
			break ;
		}
		i = (i + 1) % simu->nb_philo;
		usleep(200);
	}
	return ;
}

/**
 * Comprueba si todos los philos han alcanzado el número requerido de comidas.
 *
 * Esta función verifica si todos los filósofos han alcanzado el número
 * requerido de comidas especificado en el campo `must_eat` de la estructura de
 * simulación (t_simu). Si `must_eat` es igual a -1, lo que indica que no hay un
 * límite de comidas, la función retorna 0 inmediatamente. En caso contrario, la
 * función compara el número de comidas (`time_ate`) de cada filósofo con el
 * valor `must_eat`. Si todos los filósofos han alcanzado o superado este valor,
 * la función retorna 1, lo que indica que todos los filósofos han terminado sus
 * comidas requeridas.
 *
 * @param philo Puntero a la estructura de filósofos (t_philo).
 * @param simu  Puntero a la estructura de simulación (t_simu).
 * @return 1 si todos los filósofos han terminado sus comidas requeridas,
 *         0 en caso contrario.
 */
static int	ft_are_done(t_philo *philo, t_simu *simu)
{
	int	i;
	int	done;
	int	time_ate;

	if (simu->must_eat == -1)
		return (0);
	i = -1;
	done = -1;
	while (++i < simu->nb_philo)
	{
		pthread_mutex_lock(&philo->simu->mutex[M_MEAL]);
		time_ate = philo[i].time_ate;
		pthread_mutex_unlock(&philo->simu->mutex[M_MEAL]);
		if (time_ate >= simu->must_eat)
			if (++done == simu->nb_philo - 1)
				return (1);
		usleep(50);
	}
	return (0);
}

/**
 * Destruye los mutexes utilizados en la simulación.
 *
 * Esta función se encarga de destruir los mutexes que se han utilizado en la
 * simulación de los filósofos. Primero, itera a través de los mutexes asociados
 * a los tenedores (forks) de los filósofos y los destruye uno por uno. Luego,
 * itera a través de los mutexes generales de la simulación y también los
 * destruye. Esta función debe ser llamada al finalizar la simulación para
 * liberar los recursos de los mutexes utilizados.
 *
 * @param philo Puntero a la estructura de filósofos (t_philo).
 * @param simu  Puntero a la estructura de simulación (t_simu).
 */
static void	destroy_mutexes(t_philo *philo, t_simu *simu)
{
	int	i;

	i = 0;
	while (i < philo->simu->nb_philo)
		pthread_mutex_destroy(&philo->fork[i++]);
	i = 0;
	while (i < M_NUM)
		pthread_mutex_destroy(&simu->mutex[i++]);
}
