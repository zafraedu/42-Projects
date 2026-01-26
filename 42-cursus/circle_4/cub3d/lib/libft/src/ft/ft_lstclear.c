/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:20:48 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/08 23:58:38 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Elimina y libera la memoria de todos los elementos de una lista enlazada.
 *
 * Esta función elimina y libera la memoria de todos los elementos de la lista
 * enlazada 'lst'. La función 'del' se utiliza para liberar la memoria de los
 * contenidos de los elementos.
 *
 * @param lst  La dirección del puntero al primer elemento de la lista.
 * @param del  La función utilizada para liberar la memoria de los contenidos de
 *             los elementos. Debe aceptar un puntero void * como argumento.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	while (*lst)
	{
		aux = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(aux);
	}
}
