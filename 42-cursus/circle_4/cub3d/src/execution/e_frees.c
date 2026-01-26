/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_frees.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:32:59 by ezafra-r          #+#    #+#             */
/*   Updated: 2024/02/08 18:33:00 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_delete_tex(t_tex *tex)
{
	if (tex->no)
		mlx_delete_texture(tex->no);
	if (tex->so)
		mlx_delete_texture(tex->so);
	if (tex->we)
		mlx_delete_texture(tex->we);
	if (tex->ea)
		mlx_delete_texture(tex->ea);
}

void	ft_exit(t_mlx *mlx)
{
	mlx_delete_image(mlx->mlx_ptr, mlx->img);
	mlx_close_window(mlx->mlx_ptr);
	freelist(&mlx->dt->t_list);
	free_map(mlx->dt);
	ft_delete_tex(mlx->tex);
	ft_memfree(mlx->tex);
	ft_memfree(mlx->ply);
	ft_memfree(mlx->ray);
	mlx_terminate(mlx->mlx_ptr);
	ft_putstr_fd("END GAME\n", 1);
	exit(0);
}
