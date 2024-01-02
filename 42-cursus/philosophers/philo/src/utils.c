/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:48:52 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/10 15:48:52 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

/**
 * @brief Convierte una cadena de caracteres en un número entero.
 * @param str Cadena de caracteres a transformar en un int;
 * @return int
 */
int	ft_atoi(char *str)
{
	long	atoi;
	int		sign;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	sign = 1;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			sign = -1;
		str++;
	}
	atoi = 0;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		atoi = atoi * 10 + *str - '0';
		str++;
	}
	return (atoi * sign);
}

/**
 * Imprime un mesaje de error(str) en el file descriptor 2.
 * @param str Mensaje de error a mostrar;
 */
void	ft_msg_error(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (!str)
		return ;
	write(2, "\nError: ", 8);
	write(2, str, i);
	write(2, "\n", 1);
}

/**
 * Obtiene el tiempo actual en milisegundos desde el inicio de la simulación.
 * @return El tiempo actual en milisegundos desde el inicio de la simulación.
 */
time_t	get_time(void)
{
	struct timeval	time;

	if (gettimeofday(&time, NULL) != 0)
		ft_msg_error(" gettimeofday()");
	return ((time.tv_sec * 1000) + (time.tv_usec / 1000));
}
