#include "../inc/libft.h"

int	ft_printf(const char *str, ...)
{
	t_block	b;

	ft_bzero(&b, sizeof(b));
	va_start(b.ap, str);
	while (str[b.i])
	{
		if (str[b.i] != '%')
			b.ret += write(1, &str[b.i++], 1);
		else
		{
			(b.i)++;
			reset_block(&b);
			ft_check_flags(str, &b);
			ft_check_types(str, &b);
		}
	}
	va_end(b.ap);
	reset_block(&b);
	return (b.ret);
}
