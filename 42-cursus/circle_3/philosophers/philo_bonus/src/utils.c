/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:53:32 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/12/04 18:13:33 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

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
 * @brief Calcula la diferencia de tiempo en milisegundos.
 *
 * Esta función toma dos estructuras `struct timeval` que representan momentos
 * en el tiempo y calcula la diferencia en milisegundos entre ellos.
 *
 * @param ta Estructura `struct timeval` que representa el primer momento en el
 * tiempo.
 * @return Diferencia en milisegundos entre el momento actual y `ta`.
 */
int	get_time_diff(struct timeval ta)
{
	struct timeval	tm;

	gettimeofday(&tm, NULL);
	return ((tm.tv_sec * 1000 + tm.tv_usec / 1000) - (ta.tv_sec * 1000
			+ ta.tv_usec / 1000));
}

/**
 * @brief Versión segura de la función usleep con verificación de muerte.
 *
 * Esta función realiza una pausa en la ejecución durante un tiempo específico,
 * pero verifica periódicamente si el filósofo ha muerto durante la pausa.
 *
 * @param ph Puntero a la estructura que representa al filósofo.
 * @param time Tiempo en milisegundos durante el cual se realiza la pausa.
 */
void	ft_usleep(t_philo *ph, int time)
{
	struct timeval	before;
	struct timeval	end;

	gettimeofday(&before, NULL);
	gettimeofday(&end, NULL);
	while (((end.tv_sec * 1000 + end.tv_usec / 1000) - (before.tv_sec * 1000
				+ before.tv_usec / 1000)) < time)
	{
		ft_die(ph);
		usleep(100);
		ft_die(ph);
		gettimeofday(&end, NULL);
	}
}

/**
 * @brief Imprime el estado actual del filósofo.
 *
 * Esta función imprime el estado actual del filósofo, incluyendo el tiempo
 * transcurrido desde su nacimiento, su identificador y un mensaje específico.
 * Sin embargo, si el filósofo ha muerto o ha alcanzado el límite de comidas,
 * termina abruptamente la ejecución del programa.
 *
 * @param ph Puntero a la estructura que representa al filósofo.
 * @param str Cadena que representa el mensaje a imprimir.
 */
void	ft_print_status(t_philo *ph, char *str)
{
	if (!ph->simu->died && ph->meals != 0)
		printf("%i %d %s\n", get_time_diff(ph->t_born), ph->id, str);
	else
		exit(1);
}
