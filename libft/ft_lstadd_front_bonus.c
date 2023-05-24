/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:05:31 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/05/17 15:05:35 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* añade el nodo "new" al principio de la lista */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
