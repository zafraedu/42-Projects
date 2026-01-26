/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_valid_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:25:02 by ezafra-r          #+#    #+#             */
/*   Updated: 2024/02/08 18:30:00 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	h_map(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != '1' && map[i][j] != ' ')
				if (map[i][j - 1] == ' ' || map[i][j + 1] == ' ')
					return (ft_putstr_fd(ERR_MAP_INV, 2), 0);
			j++;
		}
		i++;
	}
	return (1);
}

int	v_map(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != '1' && map[i][j] != ' ')
				if (map[i - 1][j] == ' ' || map[i + 1][j] == ' ')
					return (ft_putstr_fd(ERR_MAP_INV, 2), 0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*fixline(char *line, int maxlen)
{
	char	*new;
	int		i;

	i = 0;
	new = ft_calloc(sizeof(char), (maxlen + 1));
	if (!new)
		return (NULL);
	while (line[i])
	{
		new[i] = line[i];
		i++;
	}
	while (i < maxlen)
	{
		new[i] = ' ';
		i++;
	}
	return (new);
}

int	getsize_line(char **map)
{
	int	i;
	int	max;

	i = -1;
	max = ft_strlen(map[0]);
	while (map[++i])
		if ((int)ft_strlen(map[i]) > max)
			max = ft_strlen(map[i]);
	return (max);
}

int	valid_map(t_data *m)
{
	int	i;
	int	maxlen;

	maxlen = getsize_line(m->map2d);
	m->sq_map = ft_calloc(sizeof(char *), (ft_arraylen(m->map2d) + 1));
	if (!m->sq_map)
		return (0);
	i = -1;
	while (m->map2d[++i])
	{
		if (maxlen == (int)ft_strlen(m->map2d[i]))
			m->sq_map[i] = ft_strdup(m->map2d[i]);
		else
			m->sq_map[i] = fixline(m->map2d[i], maxlen);
	}
	m->h_map = ft_arraylen(m->sq_map);
	m->w_map = ft_strlen(m->sq_map[0]);
	if (!h_map(m->sq_map) || !v_map(m->sq_map))
		return (free2d(m->sq_map), free2d(m->map2d), free2d(m->ture2d), 0);
	return (1);
}
