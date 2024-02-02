/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 21:46:48 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/08/26 05:03:07 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

static void	ft_init_position_fractal(t_fractal *f)
{
	f->mv_h = 0.0;
	f->mv_v = 0.0;
	if (f->index == 1)
		f->mv_h = -0.5;
	if (f->index == 3)
	{
		f->mv_v = -0.5;
		f->mv_h = -0.4;
	}
}

void	ft_init_fract(t_fractal *f)
{
	f->name = "";
	f->color = true;
	f->helper = false;
	f->smooth = false;
	f->zoom = 4;
	f->max_iter = 30;
	ft_init_position_fractal(f);
	if (f->index == 2)
	{
		f->j_nm = 0.0;
		if (!(f->j_args.real || f->j_args.img))
			f->j_args = (t_com){-0.8, 0.156};
	}
}

void	put_pixel(t_fractal *f)
{
	int	color;

	if (f->i >= f->max_iter)
		color = 0x000000FF;
	else
	{
		if (f->color)
			color = monocromatic(f);
		else
			color = colorfull(f);
	}
	mlx_put_pixel(f->img, f->x, f->y, color);
}

void	ft_error(t_fractal *f)
{
	ft_printf("%s", mlx_strerror(mlx_errno));
	if (!f->mlx)
		mlx_terminate(f->mlx);
	if (!f->img)
	{
		mlx_delete_image(f->mlx, f->img);
		mlx_terminate(f->mlx);
	}
	if (!f->help)
	{
		mlx_delete_image(f->mlx, f->help);
		mlx_terminate(f->mlx);
	}
	exit(EXIT_FAILURE);
}

void	ft_rename(t_fractal *f)
{
	if (f->index == 1)
		f->name = "Mandelbrot";
	if (f->index == 2)
		f->name = "Julia";
	if (f->index == 3)
		f->name = "BurningShip";
	if (f->index == 4)
		f->name = "Tricorn";
	mlx_set_window_title(f->mlx, f->name);
}
