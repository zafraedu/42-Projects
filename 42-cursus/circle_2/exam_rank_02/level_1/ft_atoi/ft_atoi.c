int ft_atoi(const char *str)
{
    int result = 0;
    int sign = 1;

    while ((*str >= 9 && *str <= 13) || *str == 32)
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result *= 10;
        result += *str - '0';
        str++;
    }
    return (result * sign);
}

//MAIN
/*#include <stdio.h>
int main(int ac, char **av)
{
    if (ac == 2)
       printf("%i\n", ft_atoi(av[1]));
    return 0;
}*/
