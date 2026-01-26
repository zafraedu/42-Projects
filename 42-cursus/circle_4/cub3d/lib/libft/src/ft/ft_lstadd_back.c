/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:20:40 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/12/14 22:08:50 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Agrega un elemento al final de una lista enlazada.
 *
 * Esta función agrega el elemento 'new' al final de la lista enlazada 'lst'.
 * Si la lista está vacía, 'new' se convierte en el primer elemento de la lista.
 *
 * @param lst  La dirección del puntero al primer elemento de la lista.
 * @param new  El elemento que se desea agregar al final de la lista.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
		(ft_lstlast(*lst))->next = new;
	else
		*lst = new;
}
