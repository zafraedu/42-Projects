/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:20:06 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/08 23:37:18 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Verifica si un carácter es una letra alfabética.
 *
 * Esta función verifica si el carácter 'c' es una letra alfabética (mayúscula o
 * minúscula). Se consideran letras alfabéticas a los caracteres que van desde
 * 'A' hasta 'Z' y desde 'a' hasta 'z'.
 *
 * @param c El carácter que se desea verificar.
 * @return 1 si 'c' es una letra alfabética, 0 en caso contrario.
 */
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
