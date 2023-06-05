/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:06:11 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/05/17 15:06:16 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* crea una nueva lista aplicando la funcion (f) a cada elemento de la
lista original */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newel;

	if (!f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		newel = ft_lstnew (f(lst->content));
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
