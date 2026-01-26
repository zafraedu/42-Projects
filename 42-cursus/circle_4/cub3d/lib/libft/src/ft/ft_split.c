/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:22:04 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:32:30 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		count++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (count);
}

static char	*get_word(const char *str, int start, int stop)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (stop - start + 1));
	if (!word)
		return (NULL);
	i = -1;
	while (++i < (stop - start))
		word[i] = str[start + i];
	word[i] = 0;
	return (word);
}

static char	**free_all(char **split)
{
	int	i;

	i = -1;
	while (split[++i])
		free(split[i]);
	free(split);
	return (NULL);
}

static void	skip_first_delimiter(const char *str, char c, int *i, int *start)
{
	*i = 0;
	while (str[*i] && str[*i] == c)
		(*i)++;
	*start = *i;
	*i -= 1;
}

/**
 * Divide una cadena en un array de cadenas de caracteres utilizando un
 * delimitador.
 *
 * Esta función toma una cadena 'str' y un carácter delimitador 'c' y divide la
 * cadena en múltiples subcadenas utilizando 'c' como delimitador. Luego,
 * devuelve un array de cadenas de caracteres que contiene las subcadenas
 * resultantes.
 *
 * @param str  La cadena de caracteres que se dividirá.
 * @param c    El carácter delimitador utilizado para separar las subcadenas.
 *
 * @return Un array de cadenas de caracteres (matriz de cadenas) que contiene
 *         las subcadenas resultantes. El último elemento de la matriz es NULL.
 *         Si hay un error, devuelve NULL.
 */
char	**ft_split(const char *str, char c)
{
	char	**split;
	int		i;
	int		word;
	int		start;

	split = malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!split)
		return (NULL);
	word = 0;
	skip_first_delimiter(str, c, &i, &start);
	while (str[++i])
	{
		if (str[i + 1] == c || !str[i + 1])
		{
			split[word] = get_word(str, start, i + 1);
			if (!split[word++])
				return (free_all(split));
			while (str[i + 1] && str[i + 1] == c)
				start = ++i + 1;
		}
	}
	split[word] = NULL;
	return (split);
}
