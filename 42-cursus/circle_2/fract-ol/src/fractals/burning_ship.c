/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   burning_ship.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:56:47 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/08/26 01:21:25 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/fractol.h"

void	ft_burning_ship(t_fractal *f)
{
	double	tmp;

	f->c.real = (f->x - WIDTH / 2.0) * f->zoom / WIDTH + f->mv_h;
	f->c.img = (f->y - HEIGHT / 2.0) * f->zoom / WIDTH + f->mv_v;
	f->z = (t_com){0, 0};
	f->i = -1;
	while (++f->i < f->max_iter)
	{
		f->z.real = fabs(f->z.real);
		f->z.img = fabs(f->z.img);
		if ((f->z.real * f->z.real + f->z.img * f->z.img) >= 4.0)
			break ;
		tmp = 2.0 * f->z.real * f->z.img + f->c.img;
		f->z.real = f->z.real * f->z.real - f->z.img * f->z.img + f->c.real;
		f->z.img = tmp;
	}
	put_pixel(f);
}
