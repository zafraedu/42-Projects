/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:20:43 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/08 23:57:25 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Agrega un elemento al principio de una lista enlazada.
 *
 * Esta función agrega el elemento 'new' al principio de la lista enlazada
 * 'lst'. 'new' se convierte en el nuevo primer elemento de la lista y su 'next'
 * apunta al antiguo primer elemento.
 *
 * @param lst  La dirección del puntero al primer elemento de la lista.
 * @param new  El elemento que se desea agregar al principio de la lista.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
