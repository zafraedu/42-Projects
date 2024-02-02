/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_interface.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:56:47 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/08/26 04:18:12 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

static void	select_fractal(t_fractal *f);
static void	ft_background(t_fractal *f);

void	ft_print_usage(void)
{
	ft_printf("\n ╔═════════════════════════════════════════╗\n");
	ft_printf(" ║         Usage: ./fractol \033[36m<INDEX>\033[0m        ║\n");
	ft_printf(" ╚═════════════════════════════════════════╝\n");
	ft_printf("           ╔════════════════════╗           \n");
	ft_printf(" ╔═════════╣ Available fractals ╠══════════╗\n");
	ft_printf(" ║         ╚════════════════════╝          ║\n");
	ft_printf(" ║                                         ║\n");
	ft_printf(" ║         INDEX | FRACTAL                 ║\n");
	ft_printf(" ║             \033[36m1\033[0m - mandelbrot              ║\n");
	ft_printf(" ║             \033[36m2\033[0m - julia                   ║\n");
	ft_printf(" ║             \033[36m3\033[0m - burning_ship            ║\n");
	ft_printf(" ║             \033[36m4\033[0m - Tricorn                 ║\n");
	ft_printf(" ║                                         ║\n");
	ft_printf(" ╚═════════════════════════════════════════╝\n\n");
	ft_printf(" In the program press \033[36mH\033[0m for more information\n\n");
	ft_printf(" For \033[36mjulia\033[0m you can enter the \033[33mstart position\033[0m\n");
	ft_printf(" example:\n");
	ft_printf("\t./fractol \033[36m1\033[0m\n");
	ft_printf("\t./fractol \033[36m2\033[0m \033[33m-0.835 -0.2321\033[0m\n");
	ft_printf("\t./fractol \033[36m2\033[0m \033[33m0.285 0.01\033[0m\n\n");
	exit(0);
}

void	ft_print_help(t_fractal *f)
{
	ft_background(f);
	mlx_put_string(f->mlx, " Commands ", WIDTH + 130, 20);
	mlx_put_string(f->mlx, "Fractal:", WIDTH + 20, 60);
	mlx_put_string(f->mlx, "[ 1 | 2 | 3 | 4 ]", WIDTH + 40, 90);
	mlx_put_string(f->mlx, "(also RESETS the fractal)", WIDTH + 40, 120);
	mlx_put_string(f->mlx, "Move:", WIDTH + 20, 180);
	mlx_put_string(f->mlx, "[ W | A | S | D ]", WIDTH + 40, 210);
	mlx_put_string(f->mlx, "Zomm:", WIDTH + 20, 260);
	mlx_put_string(f->mlx, "[ J | K | Mouse Scroll ]", WIDTH + 40, 290);
	mlx_put_string(f->mlx, "Iteracts:", WIDTH + 20, 350);
	mlx_put_string(f->mlx, "[ I | O ]", WIDTH + 40, 380);
	mlx_put_string(f->mlx, "Color:", WIDTH + 20, 440);
	mlx_put_string(f->mlx, "[ C | V ]", WIDTH + 40, 470);
	mlx_put_string(f->mlx, "(change | smooth)", WIDTH + 40, 500);
	mlx_put_string(f->mlx, "Point of start:", WIDTH + 20, 560);
	mlx_put_string(f->mlx, "[ N | M ]", WIDTH + 40, 590);
	mlx_put_string(f->mlx, "(ONLY Julia fractal)", WIDTH + 40, 620);
	mlx_put_string(f->mlx, "Exit: [ ESC ]", WIDTH + 20, HEIGHT - 40);
}

void	ft_draw_fract(t_fractal *f)
{
	f->y = -1;
	while (++f->y < HEIGHT)
	{
		f->x = -1;
		while (++f->x < WIDTH)
			select_fractal(f);
	}
}

static void	select_fractal(t_fractal *f)
{
	if (f->index == 1)
		ft_mandelbrot(f);
	if (f->index == 2)
		ft_julia(f);
	if (f->index == 3)
		ft_burning_ship(f);
	if (f->index == 4)
		ft_tricorn(f);
}

static void	ft_background(t_fractal *f)
{
	int	x;
	int	y;

	y = -1;
	while (++y < HEIGHT)
	{
		x = -1;
		while (++x < WTEXT)
		{
			if (x == 0 || y == 0 || x == WTEXT - 1 || y == HEIGHT - 1)
				mlx_put_pixel(f->help, x, y, 0xFFFFFFFF);
			else
				mlx_put_pixel(f->help, x, y, 0x000000FF);
		}
	}
}
