/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:05:51 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/05/17 15:05:55 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* aplica la funcion "f" a cada elemento(content) de la lista enlazada(lst)   */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
