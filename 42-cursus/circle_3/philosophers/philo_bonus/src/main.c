/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:53:32 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/12/04 17:59:41 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

static void	ft_create_process(t_philo *philo);
static void	ft_kill_process(t_philo *philo);
static void	ft_close_sem(t_simu *simu);

/**
 * @brief Función principal del programa de simulación de filósofos.
 *
 * La función principal inicializa la simulación, crea los procesos de los
 * filósofos, espera a que todos los procesos hijos terminen y luego cierra los
 * recursos utilizados.
 *
 * @param ac Número de argumentos de la línea de comandos.
 * @param av Arreglo de cadenas que representan los argumentos de
 * la línea de comandos.
 * @return Devuelve 0 si la simulación se ejecutó correctamente,
 * 1 en caso de error.
 */
int	main(int ac, char **av)
{
	t_simu	simu;
	t_philo	philo;
	int		i;
	int		status;

	if (ft_check_args(ac, av))
		return (ft_msg_error(ERR_SIMU), 1);
	if (ft_init(&simu, &philo, ac, av))
		return (ft_msg_error(ERR_SIMU), 1);
	if (sem_wait(simu.init))
		return (perror(ERR_SEM_WAIT), 1);
	ft_create_process(&philo);
	i = -1;
	while (++i < simu.nb_philo)
	{
		waitpid(-1, &status, 0);
		if (status != 0)
			ft_kill_process(&philo);
	}
	ft_close_sem(&simu);
	return (0);
}

/**
 * @brief Crea procesos para los filósofos.
 *
 * Esta función crea procesos hijos para cada filósofo en la simulación.
 * Cada filósofo tiene su propio proceso hijo,
 *	y se ejecuta la rutina del filósofo
 * en el proceso hijo.
 *
 * @param philo Un puntero a la estructura que representa al filósofo.
 */
static void	ft_create_process(t_philo *philo)
{
	int	i;

	i = -1;
	while (++i < philo->simu->nb_philo)
	{
		philo->simu->pid[i] = fork();
		philo->id = i + 1;
		if (philo->simu->pid[i] == 0)
			ft_philo_routine(philo);
	}
}

/**
 * @brief Finaliza todos los procesos hijos relacionados con la simulación.
 *
 * Esta función envía la señal SIGKILL a todos los procesos hijos asociados con
 * la simulación, terminando abruptamente su ejecución.
 *
 * @param philo Puntero a la estructura que representa al filósofo.
 */
static void	ft_kill_process(t_philo *philo)
{
	int	i;

	i = -1;
	while (++i < philo->simu->nb_philo)
		kill(philo->simu->pid[i], SIGKILL);
}

/**
 * @brief Cierra los semáforos y libera la memoria asociada.
 *
 * Esta función cierra los semáforos utilizados en la simulación y
 * libera la memoria asociada a los procesos hijos.
 *
 * @param simu Un puntero a la estructura que representa la simulación.
 */
static void	ft_close_sem(t_simu *simu)
{
	if (sem_close(simu->init))
		perror(ERR_SEM_CLOSE);
	if (sem_close(simu->forks))
		perror(ERR_SEM_CLOSE);
	if (sem_close(simu->death))
		perror(ERR_SEM_CLOSE);
	free(simu->pid);
}
