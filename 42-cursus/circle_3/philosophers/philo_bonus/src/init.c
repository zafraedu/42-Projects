/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:53:32 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/12/04 17:01:46 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

static int	ft_init_simu(t_simu *simu, char **av);
static void	ft_init_philo(t_philo *philo, t_simu *simu, int ac, char **av);

/**
 * @brief Inicializa la simulación y los filósofos.
 *
 * Esta función inicializa la estructura de simulación y la estructura de
 * filósofos. Utiliza funciones auxiliares para realizar la inicialización
 * específica de cada componente.
 *
 * @param simu Puntero a la estructura que representa la simulación.
 * @param philo Puntero a la estructura que representa a un filósofo.
 * @param ac Número de argumentos de la línea de comandos.
 * @param av Arreglo de cadenas que representan los argumentos de la línea de
 * comandos.
 * @return Devuelve 0 si la inicialización fue exitosa, 1 en caso contrario.
 */
int	ft_init(t_simu *simu, t_philo *philo, int ac, char **av)
{
	if (!ft_init_simu(simu, av))
		return (1);
	ft_init_philo(philo, simu, ac, av);
	return (0);
}

/**
 * @brief Inicializa la estructura de simulación.
 *
 * Esta función toma los argumentos de la línea de comandos y los utiliza para
 * inicializar la estructura de simulación, que incluye parámetros como el
 * número de filósofos, los tiempos de muerte, comida y sueño, así como
 * semáforos para la sincronización.
 *
 * @param simu Puntero a la estructura que representa la simulación.
 * @param av Arreglo de cadenas que representan los argumentos de la línea de
 * comandos.
 * @return Devuelve 1 si la inicialización fue exitosa, 0 en caso contrario.
 */
static int	ft_init_simu(t_simu *simu, char **av)
{
	simu->nb_philo = ft_atoi(av[1]);
	simu->time_die = ft_atoi(av[2]);
	simu->time_eat = ft_atoi(av[3]);
	simu->time_slp = ft_atoi(av[4]);
	simu->died = 0;
	simu->pid = malloc(sizeof(pid_t) * simu->nb_philo);
	if (!simu->pid)
		return (0);
	sem_unlink("init");
	simu->init = sem_open("init", O_CREAT, 0644, 1);
	if (simu->init == SEM_FAILED)
		return (perror(ERR_SEM_OPEN), 0);
	sem_unlink("forks");
	simu->forks = sem_open("forks", O_CREAT, 0644, simu->nb_philo);
	if (simu->forks == SEM_FAILED)
		return (perror(ERR_SEM_OPEN), 0);
	sem_unlink("death");
	simu->death = sem_open("death", O_CREAT, 0644, 1);
	if (simu->death == SEM_FAILED)
		return (perror(ERR_SEM_OPEN), 0);
	return (1);
}

/**
 * @brief Inicializa la estructura de filósofos.
 *
 * Esta función inicializa la estructura que representa a un filósofo con
 * valores iniciales.
 *
 * @param philo Puntero a la estructura que representa al filósofo.
 * @param simu Puntero a la estructura que representa la simulación.
 * @param ac Número de argumentos de la línea de comandos.
 * @param av Arreglo de cadenas que representan los argumentos de la línea de
 * comandos.
 */
static void	ft_init_philo(t_philo *philo, t_simu *simu, int ac, char **av)
{
	philo->id = 0;
	philo->stamina = simu->time_die;
	philo->t_last_meal = 0;
	philo->meals = -1;
	if (ac == 6)
		philo->meals = ft_atoi(av[5]);
	philo->simu = simu;
}
