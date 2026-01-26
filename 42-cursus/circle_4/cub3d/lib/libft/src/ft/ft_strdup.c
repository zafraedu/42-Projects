/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:22:12 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:37:32 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Duplica una cadena de caracteres.
 *
 * Esta función toma como entrada una cadena de caracteres 'str' y crea una
 * copia de esa cadena en un nuevo bloque de memoria dinámica. La función
 * devuelve un puntero a la copia de la cadena, o NULL si no se pudo asignar
 * memoria para la copia.
 *
 * @param str  La cadena de caracteres que se desea duplicar.
 *
 * @return     Un puntero a la copia de la cadena, o NULL en caso de error.
 */
char	*ft_strdup(const char *str)
{
	int		len;
	char	*copy;

	len = ft_strlen(str);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	while (len >= 0)
	{
		copy[len] = str[len];
		len--;
	}
	return (copy);
}
