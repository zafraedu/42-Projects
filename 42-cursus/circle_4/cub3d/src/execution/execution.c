/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:32:00 by ezafra-r          #+#    #+#             */
/*   Updated: 2024/02/08 18:32:02 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	drow_map_pixel(void *mlxl)
{
	t_mlx	*mlx;

	mlx = mlxl;
	mlx_delete_image(mlx->mlx_ptr, mlx->img);
	mlx->img = mlx_new_image(mlx->mlx_ptr, S_W, S_H);
	cub_hook(mlx, 0, 0);
	cast_rays(mlx);
	mlx_image_to_window(mlx->mlx_ptr, mlx->img, 0, 0);
}

int	check_load_ture(t_turelist *list)
{
	t_turelist		*tmp;
	mlx_texture_t	*texture;

	tmp = list;
	while (tmp)
	{
		if (!ft_strncmp(tmp->name, "NO", 2) || !ft_strncmp(tmp->name, "SO", 2)
			|| !ft_strncmp(tmp->name, "WE", 2) || !ft_strncmp(tmp->name, "EA",
				2))
		{
			texture = mlx_load_png(tmp->value);
			if (!texture)
				return (0);
			mlx_delete_texture(texture);
		}
		tmp = tmp->next;
	}
	return (1);
}

int	load_texture(t_tex *tex, t_turelist *l_ture)
{
	t_turelist	*tmp;

	tmp = l_ture;
	if (!check_load_ture(l_ture))
		return (0);
	while (tmp)
	{
		if (!ft_strncmp(tmp->name, "NO", 2))
			tex->no = mlx_load_png(tmp->value);
		else if (!ft_strncmp(tmp->name, "SO", 2))
			tex->so = mlx_load_png(tmp->value);
		else if (!ft_strncmp(tmp->name, "WE", 2))
			tex->we = mlx_load_png(tmp->value);
		else if (!ft_strncmp(tmp->name, "EA", 2))
			tex->ea = mlx_load_png(tmp->value);
		tmp = tmp->next;
	}
	return (1);
}

void	get_angle(t_mlx *mlx)
{
	char	c;

	c = mlx->dt->sq_map[mlx->dt->p_y][mlx->dt->p_x];
	if (c == 'N')
		mlx->ply->angle = 3 * M_PI / 2;
	if (c == 'S')
		mlx->ply->angle = M_PI / 2;
	if (c == 'E')
		mlx->ply->angle = 0;
	if (c == 'W')
		mlx->ply->angle = M_PI;
	mlx->ply->plyr_x = (mlx->dt->p_x * WALL_SIZE) + WALL_SIZE / 2;
	mlx->ply->plyr_y = (mlx->dt->p_y * WALL_SIZE) + WALL_SIZE / 2;
	mlx->ply->fov_rd = (FOV * M_PI / 180);
}

int	execution(t_data *dt)
{
	t_mlx	mlx;

	if (S_H > 1440 || S_W > 2560 || FOV >= 180 || FOV <= 0)
		return (freelist(&dt->t_list), free_map(dt), 0);
	mlx.ply = (t_player *)ft_calloc(sizeof(t_player), 1);
	mlx.ray = (t_ray *)ft_calloc(sizeof(t_ray), 1);
	mlx.tex = (t_tex *)ft_calloc(sizeof(t_tex), 1);
	mlx.dt = dt;
	mlx.mlx_ptr = mlx_init(S_W, S_H, "cub3D", false);
	if (!mlx.mlx_ptr)
		return (ft_exit(&mlx), 0);
	if (!load_texture(mlx.tex, dt->t_list))
		return (ft_exit(&mlx), 0);
	get_angle(&mlx);
	mlx_key_hook(mlx.mlx_ptr, &key_press, &mlx);
	mlx_loop_hook(mlx.mlx_ptr, &drow_map_pixel, &mlx);
	mlx_loop(mlx.mlx_ptr);
	ft_exit(&mlx);
	return (0);
}
