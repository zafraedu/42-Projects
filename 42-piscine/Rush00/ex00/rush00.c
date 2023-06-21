void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	column;
	int	row;

	if (x < 0 || y < 0)
		return ;
	column = 1;
	row = 1;
	while (row <= y)
	{
		while (column <= x)
		{
			if ((row == 1 || row == y) && (column == 1 || column == x))
				ft_putchar('o');
			else if (row == 1 || row == y)
				ft_putchar('-');
			else if (column == 1 || column == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			column++;
		}
		row++;
		column = 1;
		ft_putchar('\n');
	}
}
