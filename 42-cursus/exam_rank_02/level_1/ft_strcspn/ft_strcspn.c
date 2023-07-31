#include <stdio.h> //size_t

size_t  ft_strcspn(const char *s, const char *reject)
{
    const char *p1, *p2;

    for (p1 = s; *p1; ++p1)
    {
        for (p2 = reject; *p2; ++p2)
        {
            if (*p1 == *p2)
                return p1 - s;
        }
    }
    return p1 - s;
}

// NORME FORM
/*size_t  ft_strcspn(const char *s, const char *reject)
{
    int i, j;

    i = 0;
    while (s[i])
    {
        j = 0;
        while(reject[j])
        {
            if (s[i] == reject[j])
                return i;
            j++;
        }
        i++;
    }
    return i;
}*/

// MAIN
/*int main(int ac, char **av)
{
    if (ac == 3)
        printf("%li", ft_strcspn(av[1], av[2]));
    printf("\n");
    return 0;
}*/
