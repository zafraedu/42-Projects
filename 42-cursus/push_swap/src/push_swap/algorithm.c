/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:58:12 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/09/11 15:46:49 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sort_three(t_stack **stack)
{
	t_stack	*tmp;
	int		highest;

	tmp = *stack;
	highest = tmp->value;
	while (tmp)
	{
		if (tmp->value > highest)
			highest = tmp->value;
		tmp = tmp->next;
	}
	if ((*stack)->value == highest)
		ra(stack);
	else if ((*stack)->next->value == highest)
		rra(stack);
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
}

void	sort_all(t_stack **a, t_stack **b)
{
	save_three_a(a, b, stack_size(*a));
	while (*b)
	{
		target_position(a, b);
		cost(a, b);
		cheapest_move(a, b);
	}
	if (!is_sorted(*a))
		final_offset(a);
}
