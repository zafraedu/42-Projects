/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:58:12 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/09/11 17:56:57 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	ft_checker_sub(t_stack **a, t_stack **b, char *line);
static char	*ft_check(t_stack **a, t_stack **b, char *line);
static void	ft_check_sub(t_stack **a, t_stack **b, char *line);

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	*line;

	b = NULL;
	a = ft_check_args(argc, argv);
	if (!a || ft_check_arg_dup(a))
		ft_error("Error: checker", &a, &b);
	line = get_next_line(0);
	if (!line && !is_sorted(a))
		write(1, "KO\n", 3);
	else if (!line && is_sorted(a))
		write(1, "OK\n", 3);
	else
		ft_checker_sub(&a, &b, line);
	free_stack(&b);
	free_stack(&a);
	return (0);
}

static void	ft_checker_sub(t_stack **a, t_stack **b, char *line)
{
	char	*tmp;

	while (line && *line != '\n')
	{
		tmp = line;
		line = ft_check(a, b, line);
		ft_memfree(tmp);
	}
	if (*b)
		write(1, "KO\n", 3);
	else if (!is_sorted(*a))
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	ft_memfree(line);
}

static char	*ft_check(t_stack **a, t_stack **b, char *line)
{
	if (line[0] == 's' && line[1] == 'a' && line[2] == '\n')
		sa(a);
	else if (line[0] == 's' && line[1] == 'b' && line[2] == '\n')
		sb(b);
	else if (line[0] == 's' && line[1] == 's' && line[2] == '\n')
		ss(a, b);
	else if (line[0] == 'p' && line[1] == 'a' && line[2] == '\n')
		pa(a, b);
	else if (line[0] == 'p' && line[1] == 'b' && line[2] == '\n')
		pb(a, b);
	else if (line[0] == 'r' && line[1] == 'a' && line[2] == '\n')
		ra(a);
	else if (line[0] == 'r' && line[1] == 'b' && line[2] == '\n')
		rb(b);
	else if (line[0] == 'r' && line[1] == 'r' && line[2] == '\n')
		rr(a, b);
	else if (line[0] == 'r' && line[1] == 'r' && line[3] == '\n')
		ft_check_sub(a, b, line);
	else
		ft_error("Error: checker", a, b);
	return (get_next_line(0));
}

static void	ft_check_sub(t_stack **a, t_stack **b, char *line)
{
	if (line[2] == 'a')
		rra(a);
	else if (line[2] == 'b')
		rrb(b);
	else if (line[2] == 'r')
		rrr(a, b);
}
