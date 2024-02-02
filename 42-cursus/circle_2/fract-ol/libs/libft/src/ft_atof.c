/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtod.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 00:18:52 by zafraedu          #+#    #+#             */
/*   Updated: 2023/08/23 01:58:24 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

double	ft_atof(char *str)
{
	int		num;
	double	rest;
	char	*tmp;
	int		i;

	num = ft_atoi(str);
	tmp = ft_strchr(str, '.');
	if (!tmp)
		tmp = ft_strchr(str, ',');
	if (!tmp)
		return (num);
	rest = ft_atoi(&tmp[1]);
	i = 1;
	while (tmp[i])
	{
		rest /= 10;
		i++;
	}
	if (num < 0 || (str[0] == '-' && str[1] == '0'))
		return (num - rest);
	return (num + rest);
}
