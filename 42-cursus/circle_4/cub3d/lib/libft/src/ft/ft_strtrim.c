/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:22:45 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:48:14 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Elimina los caracteres especificados del principio y el final de una cadena.
 *
 * Esta función elimina los caracteres contenidos en la cadena 'set' del
 * principio y el final de la cadena 's1'.
 *
 * @param s1   La cadena de la que se eliminarán los caracteres.
 * @param set  El conjunto de caracteres que se eliminarán.
 * @return     Una nueva cadena con los caracteres eliminados o NULL si falla la
 *             asignación de memoria.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	i = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i != 0)
		i--;
	return (ft_substr(s1, 0, i + 1));
}
