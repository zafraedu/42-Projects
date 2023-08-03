int is_power_of_2(unsigned int n)
{
    return ((n & (-n)) == n ? 1 : 0);
}

//OTHER FORM (la considero mejor que la primera)
/*int is_power_of_2(unsigned int n)
{
    return ((n & (n - 1)) == 0);
}*/

//MAIN
/*#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    if (ac == 2)
    {
        int n = atoi(av[1]);
        if (is_power_of_2(n))
            printf("%i\n%i SI es potencia de 2 ;)\n", is_power_of_2(n), n);
        else
            printf("%i\n%i NO es potencia de 2 :(\n", is_power_of_2(n), n);
    }
    return 0;
}*/
