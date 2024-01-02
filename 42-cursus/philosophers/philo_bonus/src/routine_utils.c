/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:53:32 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/12/04 18:05:11 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

/**
 * @brief Verifica y adquiere los tenedores para el filósofo.
 *
 * Esta función realiza la verificación y adquisición de dos tenedores para que
 * el filósofo pueda empezar a comer. Utiliza semáforos para gestionar la
 * concurrencia y evitar condiciones de carrera entre los filósofos.
 *
 * @param ph Puntero a la estructura que representa al filósofo.
 */
void	ft_check_forks(t_philo *philo)
{
	ft_die(philo);
	if (sem_wait(philo->simu->forks))
		return (perror(ERR_SEM_WAIT));
	ft_die(philo);
	ft_print_status(philo, GOT_FORK);
	ft_die(philo);
	if (sem_wait(philo->simu->forks))
		return (perror(ERR_SEM_WAIT));
	ft_die(philo);
	ft_print_status(philo, GOT_FORK);
	ft_eat(philo);
	if (sem_post(philo->simu->forks))
		return (perror(ERR_SEM_POST));
	if (sem_post(philo->simu->forks))
		return (perror(ERR_SEM_POST));
	ft_die(philo);
}

/**
 * @brief Realiza la acción de comer para el filósofo.
 *
 * Esta función imprime el estado del filósofo mientras come, realiza una pausa
 * para simular la acción de comer, actualiza el tiempo del última comida y, si
 * se ha establecido un límite de comidas, decrementa el contador de comidas
 * restantes.
 *
 * @param philo Puntero a la estructura que representa al filósofo.
 */
void	ft_eat(t_philo *philo)
{
	ft_print_status(philo, EATING);
	ft_usleep(philo, philo->simu->time_eat);
	philo->t_last_meal = get_time_diff(philo->t_born);
	if (philo->meals > 0)
		philo->meals--;
}

/**
 * @brief Checkea si el philo ha muerto y realiza las acciones que corresponden.
 *
 * Esta función verifica si el filósofo ha muerto según ciertos criterios, como
 * el límite de comidas o el tiempo transcurrido desde la última comida. En caso
 * de muerte, imprime el estado del filósofo y termina su ejecución.
 *
 * @param philo Puntero a la estructura que representa al filósofo.
 * @return Devuelve 1 si el filósofo ha muerto, 0 en caso contrario.
 */
int	ft_die(t_philo *philo)
{
	if (philo->simu->died == 1 || philo->meals == 0)
		exit(1);
	if (sem_wait(philo->simu->death))
		return (perror(ERR_SEM_WAIT), 1);
	if (philo->stamina < get_time_diff(philo->t_born) - philo->t_last_meal
		&& !philo->simu->died)
	{
		ft_print_status(philo, DIED);
		philo->simu->died = 1;
		exit(1);
	}
	if (sem_post(philo->simu->death))
		return (perror(ERR_SEM_POST), 1);
	return (0);
}
