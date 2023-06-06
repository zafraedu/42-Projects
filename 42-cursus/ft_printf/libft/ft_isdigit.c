/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:59:21 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/05/04 14:59:57 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* verifica que el caracter "c" es numerico */
#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
