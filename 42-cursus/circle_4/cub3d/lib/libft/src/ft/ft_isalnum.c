/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:20:02 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/08 23:36:31 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Verifica si un carácter es alfanumérico.
 *
 * Esta función verifica si el carácter 'c' es un carácter alfanumérico, es
 * decir, si es una letra (alfabética) o un dígito (numérico).
 *
 * @param c El carácter que se desea verificar.
 * @return 1 si 'c' es un carácter alfanumérico, 0 en caso contrario.
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
