/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:22:54 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/07/15 18:22:54 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_toupper_str(char *str)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(str);
	while (len--)
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}
