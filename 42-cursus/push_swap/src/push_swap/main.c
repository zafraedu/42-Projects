/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:58:12 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/09/11 15:49:45 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	get_index(t_stack *stack);
static void	push_swap(t_stack **stack_a, t_stack **stack_b, int stack_size);

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_b = NULL;
	stack_a = ft_check_args(argc, argv);
	if (!stack_a || ft_check_arg_dup(stack_a))
		ft_error("Error: duplicate arguments", &stack_a, NULL);
	get_index(stack_a);
	push_swap(&stack_a, &stack_b, stack_size(stack_a));
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}

static void	get_index(t_stack *stack)
{
	t_stack	*current;
	t_stack	*tmp;

	current = stack;
	while (current)
	{
		tmp = stack;
		current->index = 1;
		while (tmp)
		{
			if (tmp->value < current->value)
				current->index++;
			tmp = tmp->next;
		}
		current = current->next;
	}
}

static void	push_swap(t_stack **a, t_stack **b, int size_a)
{
	if (is_sorted(*a))
		return ;
	if (size_a == 2)
		sa(a);
	else if (size_a == 3)
		sort_three(a);
	else if (size_a > 3)
		sort_all(a, b);
}
