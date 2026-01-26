/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:21:14 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:05:10 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Crea una nueva lista enlazada aplicando una función a cada elemento de la
 * lista original.
 *
 * Esta función recorre la lista enlazada 'lst' y aplica la función 'f' a cada
 * elemento. Luego, crea una nueva lista enlazada con los resultados y la
 * devuelve. Si la función 'f' o la función 'del' son NULL, la función devuelve
 * NULL.
 *
 * @param lst El primer elemento de la lista enlazada original.
 * @param f La función que se aplicará a cada elemento de la lista original.
 * Debe aceptar un puntero void * como argumento y devolver un puntero void *.
 * @param del La función utilizada para liberar la memoria de los contenidos de
 * la nueva lista. Debe aceptar un puntero void * como argumento.
 * @return Un puntero a la nueva lista enlazada o NULL si hay errores.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newel;

	if (!f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		newel = ft_lstnew(f(lst->content));
		if (!newel)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newel);
		lst = lst->next;
	}
	return (newlst);
}
