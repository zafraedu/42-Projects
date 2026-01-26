/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:21:27 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:08:01 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Cuenta el número de elementos en una lista enlazada.
 *
 * Esta función cuenta el número de elementos en la lista enlazada 'lst' y
 * devuelve ese número.
 *
 * @param lst  El puntero al primer elemento de la lista enlazada.
 * @return     El número de elementos en la lista enlazada.
 */
int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
