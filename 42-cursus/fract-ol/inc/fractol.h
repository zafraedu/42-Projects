#ifndef FRACTOL_H
# define FRACTOL_H

/***********************************  LIBS  ***********************************/
// personal libs
# include "../libs/libft/inc/libft.h"
# include "../libs/libmlx/include/MLX42/MLX42.h"
// global libs
# include <fcntl.h>
# include <limits.h>
# include <math.h>
# include <memory.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

/**********************************  MACROS  **********************************/
// SIZE
# define HEIGHT 700
# define WIDTH 900
# define WTEXT 350
// Zoom presition for scroll_hook
# define PRE 1.022567

/**********************************  STRUCTS  *********************************/
typedef struct s_com
{
	double		real;
	double		img;
}				t_com;

typedef struct s_rgb
{
	uint8_t		r;
	uint8_t		g;
	uint8_t		b;
}				t_rgb;

typedef struct s_fractal
{
	//window
	mlx_t		*mlx;
	//put_image
	mlx_image_t	*img;
	mlx_image_t	*help;
	int			helper;
	//color
	t_rgb		rgb;
	int			color;
	int			smooth;
	//set fractal
	char		*name;
	int			index;
	//position/iteraction
	double		zoom;
	double		mv_v;
	double		mv_h;
	int			max_iter;
	int			i;
	//position
	int			x;
	int			y;
	//fractal position/form
	t_com		z;
	t_com		c;
	t_com		j_args;
	double		j_nm;
}				t_fractal;

/********************************  FUNCTIONS  *********************************/
//fractals
void			ft_mandelbrot(t_fractal *f);
void			ft_julia(t_fractal *f);
void			ft_burning_ship(t_fractal *f);
void			ft_tricorn(t_fractal *f);
// calc color
double			smooth_color(t_fractal *f);
uint32_t		interpolate_color(t_rgb first, t_rgb second, double t);
uint32_t		rgb(t_rgb color);

// color
uint32_t		monocromatic(t_fractal *f);
uint32_t		colorfull(t_fractal *f);

// keys
void			ft_hook(void *param);
// user interface
void			ft_print_usage(void);
void			ft_draw_fract(t_fractal *f);
void			ft_print_help(t_fractal *f);
// utils
void			ft_init_fract(t_fractal *f);
void			put_pixel(t_fractal *f);
void			ft_error(t_fractal *f);
void			ft_rename(t_fractal *f);

#endif
