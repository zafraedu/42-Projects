#include <stdio.h>  // printf
#include <stdlib.h> // atoi

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", (atoi(argv[1]) + atoi(argv[3])));
		if (argv[2][0] == '-')
			printf("%d", (atoi(argv[1]) - atoi(argv[3])));
		if (argv[2][0] == '*')
			printf("%d", (atoi(argv[1]) * atoi(argv[3])));
		if (argv[2][0] == '/')
			printf("%d", (atoi(argv[1]) / atoi(argv[3])));
		if (argv[2][0] == '%')
			printf("%d", (atoi(argv[1]) % atoi(argv[3])));
	}
	printf("\n");
	return (0);
}

// OTHER FORM
/*void do_op(char *nbr1, char op, char *nbr2)
{
	int n1 = atoi(nbr1);
	int n2 = atoi(nbr2);
	int result;

	if (op == '+')
		result = n1 + n2;
	else if (op == '-')
		result = n1 - n2;
	else if (op == '*')
		result = n1 * n2;
	else if (op == '/')
		result = n1 / n2;
	else if (op == '%')
		result = n1 % n2;
	else
		return;
	printf("%d", result);
}

int main(int ac, char **av)
{
	if (ac == 4 && !av[2][1])
		do_op(av[1], av[2][0], av[3]);
	printf("\n");
	return 0;
}*/
