#include <unistd.h>
#include <stdlib.h>

void print_x(int n)
{
    if(n >= 16)
        print_x(n/16);
    write(1, &"0123456789abcdef"[n%16], 1);
}
int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int n = atoi(argv[1]);
        print_x(n);
    }
    write(1, "\n", 1);
}