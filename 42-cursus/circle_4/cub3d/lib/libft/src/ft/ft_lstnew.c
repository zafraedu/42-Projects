/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:21:23 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/10/09 00:07:22 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Crea un nuevo elemento de lista con el contenido especificado.
 *
 * Esta función crea un nuevo elemento de lista con el contenido 'content' y lo
 * devuelve como un puntero a la nueva lista.
 *
 * @param content El contenido que se almacenará en el nuevo elemento.
 * @return Un puntero al nuevo elemento de la lista o NULL en caso de error.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
