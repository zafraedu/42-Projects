/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 00:29:40 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/08/26 04:48:49 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

static void	ft_interact_hook(t_fractal *f);
static void	ft_set_fract(t_fractal *f);
static void	ft_key_hook(mlx_key_data_t keydata, void *param);
static void	ft_scroll_hook(double x, double y, void *param);

void	ft_hook(void *param)
{
	t_fractal	*f;

	f = param;
	if (mlx_is_key_down(f->mlx, MLX_KEY_ESCAPE))
		mlx_close_window(f->mlx);
	ft_set_fract(f);
	ft_interact_hook(f);
	mlx_key_hook(f->mlx, &ft_key_hook, f);
	mlx_scroll_hook(f->mlx, &ft_scroll_hook, f);
	ft_draw_fract(f);
}

static void	ft_interact_hook(t_fractal *f)
{
	double	mv;
	double	mh;

	mv = -2 * f->zoom * 0.02;
	mh = 2 * f->zoom * 0.02;
	if (mlx_is_key_down(f->mlx, MLX_KEY_W))
		f->mv_v += mv;
	if (mlx_is_key_down(f->mlx, MLX_KEY_S))
		f->mv_v -= mv;
	if (mlx_is_key_down(f->mlx, MLX_KEY_D))
		f->mv_h += mh;
	if (mlx_is_key_down(f->mlx, MLX_KEY_A))
		f->mv_h -= mh;
	if (mlx_is_key_down(f->mlx, MLX_KEY_I))
		f->max_iter = f->max_iter * 1.1 + 1;
	if (mlx_is_key_down(f->mlx, MLX_KEY_O))
		f->max_iter /= 1.1;
	if (mlx_is_key_down(f->mlx, MLX_KEY_J))
		f->zoom /= 1.1;
	if (mlx_is_key_down(f->mlx, MLX_KEY_K))
		f->zoom *= 1.1;
	if (mlx_is_key_down(f->mlx, MLX_KEY_N))
		f->j_nm += 1 * 0.01;
	if (mlx_is_key_down(f->mlx, MLX_KEY_M))
		f->j_nm -= 1 * 0.01;
}

static void	ft_set_fract(t_fractal *f)
{
	if (mlx_is_key_down(f->mlx, MLX_KEY_1))
	{
		f->index = 1;
		ft_init_fract(f);
	}
	if (mlx_is_key_down(f->mlx, MLX_KEY_2))
	{
		f->index = 2;
		ft_init_fract(f);
	}
	if (mlx_is_key_down(f->mlx, MLX_KEY_3))
	{
		f->index = 3;
		ft_init_fract(f);
	}
	if (mlx_is_key_down(f->mlx, MLX_KEY_4))
	{
		f->index = 4;
		ft_init_fract(f);
	}
	ft_rename(f);
}

static void	ft_key_hook(mlx_key_data_t keydata, void *param)
{
	t_fractal	*f;

	f = param;
	if (keydata.key == MLX_KEY_H && keydata.action == MLX_RELEASE)
	{
		f->helper = !f->helper;
		if (f->helper)
			mlx_set_window_size(f->mlx, WIDTH + WTEXT, HEIGHT);
		else
			mlx_set_window_size(f->mlx, WIDTH, HEIGHT);
	}
	if (keydata.key == MLX_KEY_C && keydata.action == MLX_RELEASE)
		f->color = !f->color;
	if (keydata.key == MLX_KEY_V && keydata.action == MLX_RELEASE)
		f->smooth = !f->smooth;
}

void	ft_scroll_hook(double x, double y, void *param)
{
	t_fractal	*f;
	int32_t		mouse_x;
	int32_t		mouse_y;
	double		movex;
	double		movey;

	f = (t_fractal *)param;
	(void)x;
	mlx_get_mouse_pos(f->mlx, &mouse_x, &mouse_y);
	if (mouse_x < 0 || mouse_x >= WIDTH || mouse_y < 0 || mouse_y >= HEIGHT)
		return ;
	movex = (mouse_x - WIDTH / 2.0) * f->zoom / WIDTH;
	movey = (mouse_y - HEIGHT / 2.0) * f->zoom / HEIGHT;
	if (y > 0)
	{
		f->zoom *= 1.1;
		f->mv_v += movey - (mouse_y - HEIGHT / 2.0) * f->zoom / (HEIGHT * PRE);
	}
	else if (y < 0)
	{
		f->zoom /= 1.1;
		f->mv_v += movey - (mouse_y - HEIGHT / 2.0) * f->zoom * PRE / HEIGHT;
	}
	f->mv_h += movex - (mouse_x - WIDTH / 2.0) * f->zoom / WIDTH;
}
