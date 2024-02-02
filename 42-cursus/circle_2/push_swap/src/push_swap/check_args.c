/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:58:12 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/09/10 23:48:04 by zafraedu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static t_stack	*ft_sub_arg_process(char **argv);
static t_stack	*ft_arg_process(int argc, char **argv);
static int		ft_atoi_ps(const char *str, t_stack **stack_a);

int	ft_check_arg_dup(t_stack *stack_a)
{
	t_stack	*tmp;

	while (stack_a)
	{
		tmp = stack_a->next;
		while (tmp)
		{
			if (stack_a->value == tmp->value)
				return (1);
			tmp = tmp->next;
		}
		stack_a = stack_a->next;
	}
	return (0);
}

t_stack	*ft_check_args(int argc, char **argv)
{
	t_stack	*stack_a;

	if (argc < 2)
		exit(1);
	else if (argc == 2)
		stack_a = ft_sub_arg_process(argv);
	else
		stack_a = ft_arg_process(argc, argv);
	return (stack_a);
}

static t_stack	*ft_sub_arg_process(char **argv)
{
	t_stack	*stack_a;
	char	**tmp;
	int		i;
	int		value;

	stack_a = NULL;
	i = 0;
	tmp = ft_split(argv[1], 32);
	while (tmp[i])
	{
		if (ft_is_digit_sign(tmp, i))
			value = ft_atoi_ps(tmp[i], &stack_a);
		else
		{
			ft_memfree_all(tmp);
			ft_error("Error: invalid int type", &stack_a, NULL);
		}
		stack_add_back(&stack_a, stack_new(value));
		i++;
	}
	ft_memfree_all(tmp);
	return (stack_a);
}

static t_stack	*ft_arg_process(int argc, char **argv)
{
	t_stack	*stack_a;
	int		i;
	int		value;

	stack_a = NULL;
	i = 1;
	while (i < argc)
	{
		if (ft_is_digit_sign(argv, i))
			value = ft_atoi_ps(argv[i], &stack_a);
		else
			ft_error("Error: invalid int type", &stack_a, NULL);
		stack_add_back(&stack_a, stack_new(value));
		i++;
	}
	return (stack_a);
}

static int	ft_atoi_ps(const char *str, t_stack **stack_a)
{
	long	atoi;
	int		sign;

	atoi = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		atoi *= 10;
		atoi += *str - 48;
		str++;
	}
	if (ft_isalpha(*str))
		ft_error("Error: invalid int type", stack_a, NULL);
	if ((atoi * sign) > 2147483647 || (atoi * sign) < -2147483648)
		ft_error("Error: invalid int type", stack_a, NULL);
	return (atoi * sign);
}
