/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 02:34:38 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/08/26 04:54:14 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

static void	ft_image(t_fractal *f);
static void	ft_check_args(int ac, char **av, t_fractal *f);

int	main(int ac, char **av)
{
	t_fractal	f;

	ft_check_args(ac, av, &f);
	ft_init_fract(&f);
	ft_image(&f);
	return (0);
}

static void	ft_check_args(int ac, char **av, t_fractal *f)
{
	if (ac != 2)
	{
		if (ac != 4 || av[1][1] || av[1][0] != '2')
			ft_print_usage();
		else
			f->j_args = (t_com){atof(av[2]), atof(av[3])};
	}
	else if (av[1][1] || av[1][0] < '1' || av[1][0] > '4')
		ft_print_usage();
	f->index = ft_atoi(av[1]);
}

static void	ft_image(t_fractal *f)
{
	f->mlx = mlx_init(WIDTH, HEIGHT, f->name, false);
	if (!f->mlx)
		ft_error(f);
	else
		mlx_set_window_limit(f->mlx, WIDTH, HEIGHT, WIDTH + WTEXT, HEIGHT);
	f->img = mlx_new_image(f->mlx, WIDTH, HEIGHT);
	if (!f->img || mlx_image_to_window(f->mlx, f->img, 0, 0))
		ft_error(f);
	f->help = mlx_new_image(f->mlx, WTEXT, HEIGHT);
	if (!f->help || mlx_image_to_window(f->mlx, f->help, WIDTH, 0))
		ft_error(f);
	ft_print_help(f);
	mlx_loop_hook(f->mlx, &ft_hook, f);
	mlx_loop(f->mlx);
	mlx_delete_image(f->mlx, f->img);
	mlx_delete_image(f->mlx, f->help);
	mlx_terminate(f->mlx);
}
