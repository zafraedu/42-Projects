/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_frees.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:24:07 by ezafra-r          #+#    #+#             */
/*   Updated: 2024/02/08 18:24:14 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	freetl(char *ture, char *line, int fd)
{
	if (ture)
		ft_memfree(ture);
	if (line)
		ft_memfree(line);
	if (fd >= 0)
		close(fd);
}

void	free_map(t_data *m)
{
	free2d(m->sq_map);
	free2d(m->map2d);
	free2d(m->ture2d);
	if (m->ff)
		free2d(m->ff);
	if (m->cc)
		free2d(m->cc);
}

void	free_m(t_mlx *mlx)
{
	if (mlx->dt->sq_map)
		free2d(mlx->dt->sq_map);
	if (mlx->dt->map2d)
		free2d(mlx->dt->map2d);
	if (mlx->dt->ture2d)
		free2d(mlx->dt->ture2d);
	if (mlx->dt->ff)
		free2d(mlx->dt->ff);
	if (mlx->dt->cc)
		free2d(mlx->dt->cc);
}

void	freelist(t_turelist **head)
{
	t_turelist	*tmp;

	tmp = *head;
	while (tmp)
	{
		*head = tmp->next;
		ft_memfree(tmp->name);
		ft_memfree(tmp->value);
		ft_memfree(tmp);
		tmp = *head;
	}
	ft_memfree(*head);
}
