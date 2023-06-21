/* imprime un caracter "c"... (fd es la salida) */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
