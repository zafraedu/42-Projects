/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:20:55 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:00:18 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Aplica una función a cada elemento de una lista enlazada.
 *
 * Esta función recorre la lista enlazada 'lst' y aplica la función 'f' a cada
 * elemento de la lista.
 *
 * @param lst  El primer elemento de la lista enlazada.
 * @param f    La función que se aplicará a cada elemento de la lista.
 *             Debe aceptar un puntero void * como argumento.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
