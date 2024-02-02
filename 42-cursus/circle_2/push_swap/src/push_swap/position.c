/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:58:12 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/09/10 22:51:55 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	position(t_stack *stack);
static int	target(t_stack **a, int b_index);
static int	botton_target(t_stack **a, int target_index, int target_pos);

int	lower_position(t_stack **stack)
{
	t_stack	*tmp;
	int		lower_index;
	int		lower_pos;

	position(*stack);
	tmp = *stack;
	lower_index = INT_MAX;
	lower_pos = tmp->pos;
	while (tmp)
	{
		if (tmp->index < lower_index)
		{
			lower_index = tmp->index;
			lower_pos = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (lower_pos);
}

void	target_position(t_stack **a, t_stack **b)
{
	t_stack	*tmp_b;

	position(*a);
	position(*b);
	tmp_b = *b;
	while (tmp_b)
	{
		tmp_b->target_pos = target(a, tmp_b->index);
		tmp_b = tmp_b->next;
	}
}

static void	position(t_stack *stack)
{
	int	i;

	i = -1;
	while (stack)
	{
		stack->pos = ++i;
		stack = stack->next;
	}
}

static int	target(t_stack **a, int b_index)
{
	t_stack	*tmp_a;
	int		target_index;
	int		target_pos;

	tmp_a = *a;
	target_index = INT_MAX;
	target_pos = 0;
	while (tmp_a)
	{
		if (tmp_a->index > b_index && tmp_a->index < target_index)
		{
			target_index = tmp_a->index;
			target_pos = tmp_a->pos;
		}
		tmp_a = tmp_a->next;
	}
	if (target_index != INT_MAX)
		return (target_pos);
	else
		return (botton_target(a, target_index, target_pos));
}

static int	botton_target(t_stack **a, int target_index, int target_pos)
{
	t_stack	*tmp_a;

	tmp_a = *a;
	while (tmp_a)
	{
		if (tmp_a->index < target_index)
		{
			target_index = tmp_a->index;
			target_pos = tmp_a->pos;
		}
		tmp_a = tmp_a->next;
	}
	return (target_pos);
}
