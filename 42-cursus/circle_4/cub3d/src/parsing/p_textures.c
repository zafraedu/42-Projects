/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_textures.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:24:55 by ezafra-r          #+#    #+#             */
/*   Updated: 2024/02/08 18:30:18 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	check_color_values(char **rgb)
{
	int	i;

	i = -1;
	while (rgb[++i])
		if (ft_atoi(rgb[i]) > 255 || ft_atoi(rgb[i]) < 0)
			return (free2d(rgb), 0);
	return (free2d(rgb), 1);
}

void	ft_process_rgb_color(t_turelist *tmp, t_data *m)
{
	if (!ft_strncmp(tmp->name, "F", 2))
		m->ff = ft_split(tmp->value, ',');
	else if (!ft_strncmp(tmp->name, "C", 2))
		m->cc = ft_split(tmp->value, ',');
	return ;
}

int	color_ture(t_data *m, t_turelist *l_ture)
{
	t_turelist	*tmp;

	m->cc = NULL;
	m->ff = NULL;
	tmp = l_ture;
	while (tmp)
	{
		if (!ft_strncmp(tmp->name, "F", 1) || !ft_strncmp(tmp->name, "C", 1))
		{
			if (!check_color_values(ft_split(tmp->value, ',')))
				return (ft_putstr_fd(ERR_MAP_RGB, 2), 0);
			ft_process_rgb_color(tmp, m);
		}
		tmp = tmp->next;
	}
	return (1);
}

int	check_color_textures(char *line)
{
	while (ft_isspace(*line))
		line++;
	return ((!ft_strncmp(line, "EA", 2) || !ft_strncmp(line, "NO", 2)
			|| !ft_strncmp(line, "SO", 2) || !ft_strncmp(line, "WE", 2))
		|| (!ft_strncmp(line, "F", 1) || !ft_strncmp(line, "C", 1)));
}

int	check_count_textures(t_data *m, int count)
{
	(void)m;
	if (count != 6)
		return (ft_putstr_fd(ERR_MAP_INV, 2), 0);
	return (1);
}
