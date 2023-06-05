/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:00:12 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/05/04 15:00:38 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* verifica si el caracter "c" es alfabetico o numerico */
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
