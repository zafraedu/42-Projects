/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:05:45 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/05/17 15:05:47 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*elimina un unico nodo de una lista y libera la memoria asociada a dicho nodo*/
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
}
