/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:21:30 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/07/15 18:21:31 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*---------------------------  ft_sltoa  -------------------------------------*/
static size_t	len_sl(long long nl)
{
	size_t	len;

	len = 0;
	if (nl <= 0)
		len++;
	while (nl != 0)
	{
		len++;
		nl /= 10;
	}
	return (len);
}

char	*ft_sltoa(long long nl)
{
	char	*str;
	size_t	len;

	len = len_sl(nl);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (nl < 0)
	{
		str[0] = '-';
		nl *= -1;
	}
	str[len] = 0;
	str[--len] = (nl % 10) + '0';
	nl /= 10;
	while (nl != 0 && len--)
	{
		str[len] = (nl % 10) + '0';
		nl /= 10;
	}
	return (str);
}

/*---------------------------  ft_ultoa  -------------------------------------*/
static size_t	len_ul(unsigned long long un)
{
	size_t	len;

	len = 0;
	if (un == 0)
		len++;
	while (un != 0)
	{
		len++;
		un /= 10;
	}
	return (len);
}

char	*ft_ultoa(unsigned long long un)
{
	char	*str;
	size_t	len;

	len = len_ul(un);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = 0;
	str[--len] = (un % 10) + '0';
	un /= 10;
	while (un != 0 && len--)
	{
		str[len] = (un % 10) + '0';
		un /= 10;
	}
	return (str);
}
