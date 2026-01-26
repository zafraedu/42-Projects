/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:20:58 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:01:42 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Obtiene un puntero al último elemento de una lista enlazada.
 *
 * Esta función devuelve un puntero al último elemento de la lista enlazada
 * `lst`. Si la lista está vacía, devuelve NULL.
 *
 * @param lst El primer elemento de la lista enlazada.
 * @return Un puntero al último elemento de la lista o NULL si la lista está
 *         vacía.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
