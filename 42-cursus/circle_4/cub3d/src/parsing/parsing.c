/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:25:08 by ezafra-r          #+#    #+#             */
/*   Updated: 2024/02/08 18:42:46 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	read_map(char *av, t_data *map, int *count)
{
	map->fd = open(av, O_RDONLY);
	if (map->fd == -1)
		return (ft_putstr_fd(ERR_INV_FILE, 2), 0);
	map->line = get_next_line(map->fd);
	if (map->line == NULL)
		return (ft_putstr_fd(ERR_EMPTY_FILE, 2), 0);
	map->ture = ft_strdup("");
	process_map(map, count);
	if (!check_count_textures(map, *count))
		return (freetl(map->ture, map->line, map->fd), 0);
	map->ture2d = ft_split(map->ture, '\n');
	if (!map->ture2d)
		return (freetl(map->ture, map->line, map->fd), 0);
	if (!read_map_(map, *count))
		return (freetl(map->ture, map->line, map->fd), free2d(map->ture2d), 0);
	return (freetl(map->ture, map->line, map->fd), 1);
}

void	get_x_y_player(t_data *m)
{
	int	i;
	int	j;

	i = 0;
	while (m->sq_map[i])
	{
		j = 0;
		while (m->sq_map[i][j])
		{
			if (m->sq_map[i][j] == 'N' || m->sq_map[i][j] == 'S'
				|| m->sq_map[i][j] == 'W' || m->sq_map[i][j] == 'E')
			{
				m->p_x = j;
				m->p_y = i;
				return ;
			}
			j++;
		}
		i++;
	}
}

int	check_extension_map(char *file_name)
{
	char	*dot;

	dot = ft_strrchr(file_name, '.');
	return (dot && !ft_strcmp(dot, ".cub"));
}

int	parsing(int ac, char **av, t_data *data)
{
	int	count;

	if (ac != 2 || !check_extension_map(av[1]))
		return (ft_putstr_fd(ERR_INV_COP, 2), 0);
	count = 0;
	if (!read_map(av[1], data, &count))
		return (0);
	if (!valid_map(data))
		return (0);
	data->t_list = NULL;
	if (!lst_ture(data, &data->t_list))
		return (free_map(data), freelist(&data->t_list), 0);
	if (!color_ture(data, data->t_list))
		return (free_map(data), freelist(&data->t_list), 0);
	get_x_y_player(data);
	return (1);
}
