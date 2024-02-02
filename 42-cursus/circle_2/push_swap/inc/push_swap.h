/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:26:38 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/09/11 15:47:46 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/***********************************  LIBS  ***********************************/
// personal libs
# include "../libft/inc/libft.h"
// global libs
# include <fcntl.h>
# include <limits.h>
# include <math.h>
# include <memory.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

/**********************************  MACROS  **********************************/
//error
# define ERR_STACK "error stack"

/**********************************  STRUCTS  *********************************/
typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}					t_stack;

/********************************  FUNCTIONS  *********************************/
//utils
void				free_stack(t_stack **stack);
void				ft_error(char *msg, t_stack **stack_a, t_stack **stack_b);
int					is_sorted(t_stack *stack);
// check_args
t_stack				*ft_check_args(int argc, char **argv);
int					ft_check_arg_dup(t_stack *stack_a);
//stack
t_stack				*stack_last(t_stack *lst);
t_stack				*stack_new(int value);
void				stack_add_back(t_stack **stack, t_stack *stack_new);
int					stack_size(t_stack *stack);
// algorithm
void				sort_three(t_stack **stack);
void				sort_all(t_stack **a, t_stack **b);
// algorithm utils
void				save_three_a(t_stack **a, t_stack **b, int size);
void				cost(t_stack **stack_a, t_stack **stack_b);
void				cheapest_move(t_stack **stack_a, t_stack **stack_b);
void				final_offset(t_stack **stack_a);
//move
void				move(t_stack **a, t_stack **b, int cost_a, int cost_b);
//position
int					lower_position(t_stack **stack);
void				target_position(t_stack **a, t_stack **b);

//rotate
void				ra(t_stack **stack_a);
void				rb(t_stack **stack_b);
void				rr(t_stack **stack_a, t_stack **stack_b);
//push
void				pa(t_stack **stack_a, t_stack **stack_b);
void				pb(t_stack **stack_a, t_stack **stack_b);
//swap
void				sa(t_stack **stack_a);
void				sb(t_stack **stack_b);
void				ss(t_stack **stack_a, t_stack **stack_b);
//reverse rotate
void				rra(t_stack **stack_a);
void				rrb(t_stack **stack_b);
void				rrr(t_stack **stack_a, t_stack **stack_b);

#endif
