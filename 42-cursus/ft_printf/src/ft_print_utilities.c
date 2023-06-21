#include "../inc/ft_printf.h"

void	reset_block(t_block *b)
{
	b->type = 0;
	free(b->s);
	b->s = NULL;
	b->flags.len_h = 0;
	b->flags.len_hh = 0;
	b->flags.len_l = 0;
	b->flags.len_ll = 0;
}

void	print_char(char c, t_block *b)
{
	b->ret += write(1, &c, 1);
	(b->i)++;
}

void	print_str(t_block *b)
{
	b->ret += write(1, b->s, ft_strlen(b->s));
	(b->i)++;
}

void	print_null(t_block *b)
{
	b->ret += write(1, "(null)", 6);
	(b->i)++;
}

void	print_dig(t_block *b)
{
	if (b->type == 'X')
		ft_toupper_str(b->s);
	b->ret += write(1, b->s, ft_strlen(b->s));
	(b->i)++;
}
