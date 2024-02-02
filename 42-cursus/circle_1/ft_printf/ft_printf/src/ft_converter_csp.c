#include "../inc/ft_printf.h"

void	ft_converter_cs(char type, t_block *b)
{
	int		tempc;
	char	*temps;

	b->type = type;
	if (b->type == 'c')
	{
		tempc = va_arg(b->ap, int);
		print_char((char)tempc, b);
	}
	else if (b->type == 's')
	{
		temps = va_arg(b->ap, char *);
		if (!temps)
			return (print_null(b));
		b->s = ft_strdup((char *)temps);
		print_str(b);
	}
	else if (b->type == '%')
		print_char('%', b);
}

void	ft_converter_p(t_block *b)
{
	unsigned long	addr;

	addr = (unsigned long)va_arg(b->ap, void *);
	b->ret += write(1, "0x", 2);
	if (!addr)
		b->s = ft_strdup("0");
	else
		b->s = ft_itoa_base(addr, 16);
	print_dig(b);
}
