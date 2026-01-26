/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:22:54 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:50:45 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Convierte una cadena de caracteres en letras mayúsculas.
 *
 * Esta función toma una cadena de caracteres 'str' y convierte cada carácter
 * en ella a su equivalente en mayúsculas utilizando la función 'ft_toupper'.
 *
 * @param str  La cadena de caracteres que se va a convertir a mayúsculas.
 */
void	ft_toupper_str(char *str)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(str);
	while (len--)
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}
