/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:58:12 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/09/11 15:44:35 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	save_three_a(t_stack **a, t_stack **b, int size)
{
	while (stack_size(*b) < size / 2 && stack_size(*a) > 3)
	{
		if ((*a)->index <= size / 2)
			pb(a, b);
		else
			ra(a);
	}
	while (stack_size(*a) > 3)
		pb(a, b);
	sort_three(a);
}

void	cost(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *b;
	while (tmp)
	{
		tmp->cost_b = tmp->pos;
		if (tmp->pos > stack_size(*b) / 2)
			tmp->cost_b = (stack_size(*b) - tmp->pos) * -1;
		tmp->cost_a = tmp->target_pos;
		if (tmp->target_pos > stack_size(*a) / 2)
			tmp->cost_a = (stack_size(*a) - tmp->target_pos) * -1;
		tmp = tmp->next;
	}
}

void	cheapest_move(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	int		cheapest;
	int		cost_a;
	int		cost_b;

	tmp = *b;
	cheapest = INT_MAX;
	while (tmp)
	{
		if (ft_iabs(tmp->cost_a) + ft_iabs(tmp->cost_b) < ft_iabs(cheapest))
		{
			cost_a = tmp->cost_a;
			cost_b = tmp->cost_b;
			cheapest = ft_iabs(cost_b) + ft_iabs(cost_a);
		}
		tmp = tmp->next;
	}
	move(a, b, cost_a, cost_b);
}

void	final_offset(t_stack **a)
{
	int	lower_pos;

	lower_pos = lower_position(a);
	if (lower_pos > stack_size(*a) / 2)
	{
		while (lower_pos < stack_size(*a))
		{
			rra(a);
			lower_pos++;
		}
	}
	else
	{
		while (lower_pos > 0)
		{
			ra(a);
			lower_pos--;
		}
	}
}
