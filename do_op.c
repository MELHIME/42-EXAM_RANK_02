#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int somme = 0;
    int a = atoi(argv[1]);
    int b = atoi(argv[3]);

    if(argc == 4)
    {
        if (argv[2][0] == '+')
            somme = a + b;
        if (argv[2][0] == '-')
            somme = a - b;
        if (argv[2][0] == '*')
            somme = a * b;
        if (argv[2][0] == '/')
            somme = a / b;
        if (argv[2][0] == '%')
            somme = a % b;
        printf("%d", somme);
    }
    printf("\n");
}