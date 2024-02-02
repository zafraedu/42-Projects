/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:48:22 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/10 15:48:23 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

static int	ft_init_simu(t_simu **simu, int ac, char **av);
static int	ft_init_simu_mutexes(t_simu **simu);
static int	ft_init_philo(t_philo **philo, t_simu *simu);

/**
 * Inicializa las estructuras de filósofos y simulación.
 *
 * Esta función realiza la inicialización de las estructuras de filósofos
 * (t_philo) y simulación (t_simu) necesarias para la ejecución de la
 * simulación. Reserva memoria dinámica para estas estructuras y verifica si la
 * asignación de memoria fue exitosa. Luego, llama a funciones auxiliares para
 * inicializar la estructura de simulación y la estructura de filósofos. Si
 * alguna de las asignaciones de memoria falla o la inicialización de
 * cualquiera de las estructuras no tiene éxito, la función retorna 1.
 *
 * @param philo Puntero al puntero de la estructura de filósofos (t_philo).
 * @param simu Puntero al puntero de la estructura de simulación (t_simu).
  * @param ac Cantidad de argumentos pasados al programa.
 * @param av Vector de cadenas de caracteres que representan los argumentos.
 * @return 0 si la inicialización es exitosa, 1 en caso de error.
 */
int	ft_init(t_philo **philo, t_simu **simu, int ac, char **av)
{
	*simu = (t_simu *)malloc(sizeof(t_simu));
	if (*simu == NULL)
		return (1);
	(*simu)->mutex = NULL;
	if (ft_init_simu(simu, ac, av) != 0)
		return (1);
	*philo = (t_philo *)malloc(sizeof(t_philo) * (size_t)(*simu)->nb_philo);
	if (*philo == NULL)
		return (1);
	(*philo)->fork = NULL;
	if (ft_init_philo(philo, *simu) != 0)
		return (1);
	return (0);
}

/**
 * Inicializa la estructura de simulación y sus parámetros.
 *
 * Esta función inicializa la estructura de simulación (t_simu) y sus
 * parámetros utilizando los argumentos proporcionados (argv).
 * Llama a la función ft_init_simu_mutexes para inicializar los mutexes
 * necesarios para la simulación.
 *
 * @param simu Puntero al puntero de la estructura de simulación (t_simu).
 * @param ac Cantidad de argumentos pasados al programa.
 * @param av Vector de cadenas de caracteres que representan los argumentos.
 * @return 0 si la inicialización es exitosa, 1 en caso de error.
 */
static int	ft_init_simu(t_simu **simu, int ac, char **av)
{
	(*simu)->nb_philo = ft_atoi(av[1]);
	(*simu)->time_die = ft_atoi(av[2]);
	(*simu)->time_eat = ft_atoi(av[3]);
	(*simu)->time_slp = ft_atoi(av[4]);
	(*simu)->must_eat = -1;
	if (ac == 6)
		(*simu)->must_eat = ft_atoi(av[5]);
	(*simu)->time_start = get_time();
	(*simu)->time_thk = 0;
	if (((*simu)->nb_philo % 2 == 0) && (*simu)->time_eat > (*simu)->time_slp)
		(*simu)->time_thk = (*simu)->time_eat - (*simu)->time_slp;
	(*simu)->done = 0;
	(*simu)->died = 0;
	if (ft_init_simu_mutexes(simu))
		return (1);
	return (0);
}

/**
 * Inicializa los mutexes para la estructura de simulación.
 *
 * Esta función inicializa los mutexes necesarios para la estructura de
 * simulación (t_simu). Reserva memoria dinámica para un arreglo de mutexes y
 * luego inicializa cada mutex en el arreglo.
 *
 * @param simu Puntero al puntero de la estructura de simulación (t_simu).
 * @return 0 si la inicialización es exitosa, 1 en caso de error.
 */
static int	ft_init_simu_mutexes(t_simu **simu)
{
	int	i;

	(*simu)->mutex = malloc(sizeof(pthread_mutex_t) * ((size_t)M_NUM));
	if ((*simu)->mutex == NULL)
		return (1);
	i = 0;
	while (i < M_NUM)
		pthread_mutex_init(&(*simu)->mutex[i++], NULL);
	return (0);
}

/**
 * Inicializa las estructuras de filósofos y sus parámetros.
 *
 * Esta función inicializa las estructuras de filósofos (t_philo) y sus
 * parámetros. Reserva memoria dinámica para los mutexes de los tenedores y
 * asigna valores a los campos de las estructuras de filósofos. Cada filósofo
 * tiene su propio ID, tiempo de última comida, contador de comidas, índices de
 * tenedores, puntero a los mutexes de los tenedores, puntero a la estructura
 * de simulación y más. Los mutexes de los tenedores se inicializan en esta
 * función.
 *
 * @param philo Puntero al puntero de la estructura de filósofos (t_philo).
 * @param simu  Puntero a la estructura de simulación (t_simu).
 * @return 0 si la inicialización es exitosa, 1 en caso de error.
 */
static int	ft_init_philo(t_philo **philo, t_simu *simu)
{
	pthread_mutex_t	*fork;
	int				i;

	fork = malloc(sizeof(pthread_mutex_t) * ((size_t)simu->nb_philo));
	if (fork == NULL)
		return (1);
	i = 0;
	while (i < simu->nb_philo)
		pthread_mutex_init(&fork[i++], NULL);
	i = -1;
	while (++i < simu->nb_philo)
	{
		(*philo)[i].id = i;
		(*philo)[i].last_meal = simu->time_start;
		(*philo)[i].time_ate = 0;
		(*philo)[i].f[0] = i;
		(*philo)[i].f[1] = (i + 1) % simu->nb_philo;
		(*philo)[i].fork = fork;
		(*philo)[i].simu = simu;
	}
	return (0);
}
