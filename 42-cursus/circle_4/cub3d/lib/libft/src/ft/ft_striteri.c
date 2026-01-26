/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:22:15 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:38:33 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Aplica una función a cada caracter de una cadena con índice.
 *
 * Esta función toma como entrada un String 's' y una función 'f'. Itera a
 * través de cada caracter en la cadena y llama a la función 'f' pasando el
 * índice del caracter y el propio caracter como argumentos. Esto permite
 * modificar o procesar cada caracter individualmente en la cadena.
 *
 * @param s  La cadena de caracteres a la que se aplicará la función.
 * @param f  La función que se aplicará a cada caracter.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = ft_strlen(s);
	while (i--)
		f(i, &s[i]);
}
