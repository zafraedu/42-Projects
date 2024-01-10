#include <stdarg.h>
#include <unistd.h>

void	ft_str(char *str, int *len)
{
	if (!str)
		str = "(null)";
	while (*str)
		*len += write(1, str++, 1);
}

void	ft_num(long long int n, int base, int *len)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (n < 0)
	{
		n *= -1;
		*len += write(1, "-", 1);
	}
	if (n >= base)
		ft_num((n / base), base, len);
	*len += write(1, &hexa[n % base], 1);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	ptr;

	len = 0;
	va_start(ptr, format);
	while (*format)
	{
		if ((*format == '%') && *(format + 1))
		{
			format++;
			if (*format == 's')
				ft_str(va_arg(ptr, char *), &len);
			else if (*format == 'd')
				ft_num((long long int)va_arg(ptr, int), 10, &len);
			else if (*format == 'x')
				ft_num((long long int)va_arg(ptr, unsigned int), 16, &len);
		}
		else
			len += write(1, format, 1);
		format++;
	}
	return (va_end(ptr), len);
}

// int	main(void) //test
// {
// 	ft_printf("hola %s %d %x\n", "User", 30, 255);
// 	return (0);
// }
