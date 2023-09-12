/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_digit_sign.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:19:59 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/09/11 00:24:42 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_is_digit_sign(char **str, int i)
{
	int	j;

	j = 0;
	if (ft_issign(str[i][j]))
		j++;
	while (str[i][j])
	{
		if (!ft_isdigit(str[i][j]))
			return (0);
		j++;
	}
	return (1);
}
