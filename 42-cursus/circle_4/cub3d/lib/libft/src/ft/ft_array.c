/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 00:18:52 by zafraedu          #+#    #+#             */
/*   Updated: 2024/01/24 22:06:02 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief Añade un string a un char ** al final del mismo. Si no existe,
 * lo crea, si existe lo añade a la última posición.
 *
 * @param str string a añadir
 * @param array char ** al que añadir
 * @return char**
 */
char	**ft_arrayadd(char *str, char **array)
{
	char	**new_array;
	int		i;

	if (!array)
	{
		array = ft_calloc(sizeof(char *), 2);
		array[0] = str;
		return (array);
	}
	else
	{
		new_array = ft_calloc(sizeof(char *), ft_arraylen(array) + 2);
		i = -1;
		while (array[++i])
			new_array[i] = ft_strdup(array[i]);
		new_array[i] = ft_strdup(str);
		free2d(array);
		free(str);
		return (new_array);
	}
}

/**
 * @brief Elimina un elemento de un char **
 *
 * @param pos int con la posición a eliminar
 * @param array char ** del que eliminar un elemento
 * @return char** sin ese elemento
 */
char	**ft_arraydelete(int pos, char **array)
{
	int	len;
	int	i;

	len = ft_arraylen(array);
	if (!array || pos < 0 || pos > len)
		return (array);
	i = pos;
	while (array[i])
	{
		array[i] = array[i + 1];
		i++;
	}
	return (array);
}

/**
 * @brief Crea una copia de un char ** y devuelve la copia
 *
 * @param array char ** a copiar
 * @return char** copiado en nueva dirección de memoria
 */
char	**ft_arraydup(char **array)
{
	char	**new_array;
	int		i;

	if (!array)
		return (NULL);
	new_array = ft_calloc(sizeof(char *), ft_arraylen(array) + 1);
	i = 0;
	while (array[i])
	{
		new_array[i] = ft_strdup(array[i]);
		i++;
	}
	return (new_array);
}

/**
 * @brief Función para medir un char **
 *
 * @param array char **
 * @return int con el numero de elementos dentro del array
 */
int	ft_arraylen(char **array)
{
	int	i;

	i = 0;
	if (!array)
		return (0);
	while (array[i])
		i++;
	return (i);
}
