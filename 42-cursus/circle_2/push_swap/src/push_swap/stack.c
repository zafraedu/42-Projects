/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:58:12 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/09/08 19:19:47 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_stack	*stack_last(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_stack	*stack_new(int value)
{
	t_stack	*new;

	new = (t_stack *)ft_calloc(1, sizeof(*new));
	new->value = value;
	new->next = NULL;
	return (new);
}

void	stack_add_back(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return ;
	if (!(*stack))
		*stack = stack_new;
	else
		stack_last(*stack)->next = stack_new;
}

int	stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}
