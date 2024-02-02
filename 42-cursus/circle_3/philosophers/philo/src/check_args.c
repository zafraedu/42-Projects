/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:48:03 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/11/29 14:06:43 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

static int	print_usage(void);
static int	ft_isdigit(char *str);

/**
 * Verifica los argumentos pasados al programa.
 *
 * Esta función verifica si el número de argumentos (ac) es válido y si
 * cada argumento es un número entero válido dentro del rango permitido.
 * Si no hay fílosofos (av[1] = 0) o la cantidad de comida es nula (av[5] = 0),
 * sale del programa sin ningún mensaje
 *
 * @param ac Cantidad de argumentos pasados al programa.
 * @param av Vector de cadenas de caracteres que representan los argumentos.
 * @return 0 si los argumentos son válidos, 1 en caso contrario
 */
int	ft_check_args(int ac, char **av)
{
	if (ac < 5 || ac > 6)
		return (ft_msg_error(ERR_ARG), print_usage());
	if ((ac == 6 && ft_atoi(av[5]) == 0) || ft_atoi(av[1]) == 0)
		return (1);
	while (ac-- > 1)
	{
		if (!ft_isdigit(av[ac]))
			return (ft_msg_error(ERR_INT), print_usage());
		if (ft_atoi(av[ac]) < 0 || ft_atoi(av[ac]) > INT_MAX)
			return (ft_msg_error(ERR_INT), print_usage());
	}
	return (0);
}

/**
 * Imprime la guía para usar el programa.
 * @return 1
 */
static int	print_usage(void)
{
	printf("                 ╔══════════════╗\n");
	printf(" ╔═══════════════╣    Usage     ╠═══════════════╗\n");
	printf(" ║               ╚══════════════╝               ║\n");
	printf(" ║ example:\t\t\t\t\t║\n");
	printf(" ║ ./philo \033[36m2\033[0m \033[31m400\033[0m \033[32m200\033[0m");
	printf(" \033[35m200\033[0m \033[33m3\033[0m\t\t\t║\n");
	printf(" ║\t\t\t\t\t\t║\n");
	printf(" ║ explain:\t\t\t\t\t║\n");
	printf(" ║\t     \033[36mav[1]\033[0m - number_of_philosophers\t║\n");
	printf(" ║\t     \033[31mav[2]\033[0m - time_to_die\t\t║\n");
	printf(" ║\t     \033[32mav[3]\033[0m - time_to_eat\t\t║\n");
	printf(" ║\t     \033[35mav[4]\033[0m - time_to_sleep\t\t║\n");
	printf(" ║ \033[33m(optional)av[5]\033[0m - must_eat\t\t\t║\n");
	printf(" ║\t\t\t\t\t\t║\n");
	printf(" ╚══════════════════ZAFRAEDU════════════════════╝\n\n");
	return (1);
}

/**
 * Comprueba si (str) es un dígito, sin tener en cuenta el signo.
 *
 * @param str Cadena de caracteres a comprobar;
 * @return 1 si (str) es un dígito, 0 en caso contrario
 */
static int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (!str[i])
		return (1);
	return (0);
}
