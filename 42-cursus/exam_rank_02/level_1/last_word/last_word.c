#include <unistd.h>

void last_word(char *str)
{

}

int main(int ac, char **av)
{
    if (ac == 2)
        last_word(av[1]);
    write(1, "\n", 1);
    return 0;
}
