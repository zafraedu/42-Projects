/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:53:32 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/12/04 16:57:42 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

static void	ft_philo_only(t_philo *p);
static void	ft_odd_pair(t_philo *p);

/**
 * @brief Rutina principal del hilo del filósofo.

 * Esta función representa la rutina principal ejecutada por el hilo de un
 * filósofo durante la simulación. Realiza acciones como inicializar el
 * filósofo, comprobar si es el único filósofo, ejecutar la lógica de comidas,
 * comprobar si el filósofo ha muerto, y realizar las acciones de
 * dormir y pensar.
 *
 * @param arg Puntero a la estructura que representa al filósofo.
 * @return Devuelve NULL al finalizar la rutina.
 */
void	*ft_philo_routine(void *arg)
{
	t_philo	p;

	p = *(t_philo *)arg;
	if (sem_post(p.simu->init))
		return (perror(ERR_SEM_POST), NULL);
	if (p.simu->nb_philo == 1)
		return (ft_philo_only(&p), NULL);
	ft_odd_pair(&p);
	while (p.meals)
	{
		if (ft_die(&p))
			break ;
		ft_check_forks(&p);
		ft_print_status(&p, SLEEPING);
		if (ft_die(&p))
			break ;
		ft_usleep(&p, p.simu->time_slp);
		ft_print_status(&p, THINKING);
		if (ft_die(&p))
			break ;
	}
	return (NULL);
}

/**
 * @brief Rutina para el caso especial de un solo filósofo.
 *
 * Esta función representa la rutina ejecutada cuando hay solo un filósofo en
 * la simulación. Inicializa el tiempo de nacimiento del filósofo, duerme
 * durante el tiempo de muerte y luego imprime un mensaje indicando la muerte
 * del filósofo.
 *
 * @param p Puntero a la estructura que representa al filósofo.
 */
static void	ft_philo_only(t_philo *p)
{
	gettimeofday(&p->t_born, NULL);
	ft_usleep(p, p->simu->time_die);
	printf("%d %d died\n", get_time_diff(p->t_born), p->id);
}

/**
 * @brief Lógica especial para filósofos con identificadores impares.
 *
 * Esta función implementa una lógica especial para los filósofos con
 * identificadores impares. Espera un breve periodo de tiempo para permitir
 * que los filósofos con identificadores pares comiencen antes.
 * Luego, si el filósofo tiene un identificador par, lo hace pensar por un breve
 * periodo antes de comenzar su rutina normal.
 *
 * @param p Puntero a la estructura que representa al filósofo.
 */
static void	ft_odd_pair(t_philo *p)
{
	static int	i;

	while (i++ < p->simu->nb_philo)
		usleep(50);
	gettimeofday(&p->t_born, NULL);
	if (p->id % 2 == 0)
	{
		ft_print_status(p, THINKING);
		ft_usleep(p, 50);
	}
}
