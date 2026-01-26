/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_lst_ture.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:24:22 by ezafra-r          #+#    #+#             */
/*   Updated: 2024/02/08 18:24:25 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	get_index(char *line, int i)
{
	while (ft_isspace(line[i]))
		i++;
	return (i);
}

t_turelist	*new_texture(char *line)
{
	t_turelist	*list;

	list = (t_turelist *)ft_calloc(sizeof(t_turelist), 1);
	if (!list)
		return (NULL);
	while (ft_isspace(*line))
		line++;
	if ((!ft_strncmp(line, "NO", 2) || !ft_strncmp(line, "SO", 2)
			|| !ft_strncmp(line, "WE", 2) || !ft_strncmp(line, "EA", 2)))
	{
		list->name = ft_substr(line, 0, 2);
		list->value = ft_substr(line, get_index(line, 2), ft_strlen(line));
	}
	else if ((!ft_strncmp(line, "F", 1) || !ft_strncmp(line, "C", 1)))
	{
		list->name = ft_substr(line, 0, 1);
		list->value = ft_substr(line, get_index(line, 1), ft_strlen(line));
	}
	list->next = NULL;
	return (list);
}

void	lst_back_ture(t_turelist **l_ture, t_turelist *new)
{
	t_turelist	*tmp;

	if (!*l_ture)
	{
		(*l_ture) = new;
		return ;
	}
	tmp = *l_ture;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

int	lst_ture(t_data *m, t_turelist **l_ture)
{
	int			i;
	t_turelist	*tmp;

	i = 0;
	while (m->ture2d[i])
	{
		tmp = new_texture(m->ture2d[i++]);
		if (!tmp)
			return (0);
		lst_back_ture(l_ture, tmp);
	}
	return (1);
}
