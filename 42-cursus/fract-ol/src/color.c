/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:08:52 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/08/26 04:11:52 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

static t_rgb	*get_palette_colorful(void);

uint32_t	monocromatic(t_fractal *f)
{
	t_rgb	palette;
	double	l;

	if (f->smooth)
		l = smooth_color(f);
	else
		l = f->i;
	palette = (t_rgb){
		(255 / f->max_iter) * l,
		(255 / f->max_iter) * l,
		(255 / f->max_iter) * l,
	};
	return (rgb(palette));
}

uint32_t	colorfull(t_fractal *f)
{
	t_rgb	*palette;
	double	l;

	t_rgb index, next_index;
	palette = get_palette_colorful();
	if (f->smooth)
		l = smooth_color(f);
	else
		l = f->i;
	index = palette[(int)floor(l) % 92];
	next_index = palette[((int)floor(l) + 1) % 92];
	return (interpolate_color(index, next_index, l - floor(l)));
}
static t_rgb	*get_palette_colorful(void)
{
	t_rgb	*palette;

	palette = (t_rgb[105]){{255, 0, 0}, {255, 8, 0}, {255, 16, 0}, {255, 24, 0},
		{255, 32, 0}, {255, 40, 0}, {255, 48, 0}, {255, 56, 0}, {255, 64, 0},
		{255, 72, 0}, {255, 80, 0}, {255, 88, 0}, {255, 96, 0}, {255, 104, 0},
		{255, 112, 0}, {255, 128, 0}, {255, 144, 0}, {255, 160, 0}, {255, 176,
		0}, {255, 192, 0}, {255, 208, 0}, {255, 224, 0}, {255, 240, 0}, {255,
		255, 0}, {239, 255, 0}, {223, 255, 0}, {207, 255, 0}, {191, 255, 0},
		{175, 255, 0}, {159, 255, 0}, {143, 255, 0}, {127, 255, 0}, {111, 255,
		0}, {95, 255, 0}, {79, 255, 0}, {63, 255, 0}, {47, 255, 0}, {31, 255,
		0}, {16, 255, 0}, {0, 255, 0}, {0, 255, 8}, {0, 255, 16}, {0, 255, 24},
		{0, 255, 32}, {0, 255, 40}, {0, 255, 48}, {0, 255, 56}, {0, 255, 64},
		{0, 255, 72}, {0, 255, 80}, {0, 255, 88}, {0, 255, 96}, {0, 255, 104},
		{0, 255, 112}, {0, 255, 128}, {0, 255, 136}, {0, 255, 144}, {0, 255,
		152}, {0, 255, 160}, {0, 255, 168}, {0, 255, 176}, {0, 255, 184}, {0,
		255, 192}, {0, 255, 200}, {0, 255, 216}, {0, 255, 232}, {0, 255, 240},
		{0, 255, 255}, {0, 247, 255}, {0, 239, 255}, {0, 231, 255}, {0, 223,
		255}, {0, 215, 255}, {0, 207, 255}, {0, 199, 255}, {0, 191, 255}, {0,
		183, 255}, {0, 175, 255}, {0, 167, 255}, {0, 159, 255}, {0, 151, 255},
		{0, 142, 255}, {0, 127, 255}, {0, 119, 255}, {0, 111, 255}, {0, 103,
		255}, {0, 95, 255}, {0, 63, 255}, {0, 31, 255}, {0, 0, 255}, {32, 0,
		224}, {224, 0, 208}, {64, 0, 192}, {224, 0, 176}, {96, 0, 160}, {224, 0,
		144}, {128, 0, 128}, {224, 0, 112}, {160, 0, 96}, {176, 0, 80}, {192, 0,
		64}, {207, 0, 48}, {223, 0, 32}, {239, 0, 16}, {255, 0, 0}};
	return (palette);
}
