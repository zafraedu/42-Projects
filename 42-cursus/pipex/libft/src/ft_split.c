/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:22:04 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/07/15 18:22:04 by ezafra-r         ###   ########.fr       */
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
