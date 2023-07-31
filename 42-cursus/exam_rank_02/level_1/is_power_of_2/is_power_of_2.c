int is_power_of_2(unsigned int n)
{
    return ((n % 2 == 0 && n != 0) ? 1 : 0);
}

//MAIN
/*#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    if (ac == 2)
    {
        int n = atoi(av[1]);
        printf("%i\n", n);
        printf("%i\n", is_power_of_2(n));
    }
    return 0;
}*/
