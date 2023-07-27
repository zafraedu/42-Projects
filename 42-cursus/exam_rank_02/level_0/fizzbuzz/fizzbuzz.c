#include <unistd.h>

void write_number(int n)
{
    if (n > 9)
        write_number(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            write_number(i);
        write(1, "\n", 1);
    }
    return 0;
}

//NORME FORM
/*#include  <unistd.h>
void writeN(int n){
    if (n > 9)
        writeN(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int main(){
    int n = 1;
    while(n <= 100){
        if((n % 3 == 0) && (n % 5 == 0))
            write(1, "fizzbuzz", 8);
        else if(n % 3 == 0)
            write(1, "fizz", 4);
        else if(n % 5 == 0)
            write(1, "buzz", 4);
        else
            writeN(n);
        write(1, "\n", 1);
        n++;
    }
}*/
