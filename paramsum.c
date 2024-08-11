#include <unistd.h>
#include <stdio.h>

void put_nb(int n)
{
    if(n >= 10)
        put_nb(n / 10);
    // printf("%d\n", n);
    // return;
    write(1, &"0123456789"[n%10], 1);

}

int main(int argc, char *argv[])
{
    (void)argv;
    put_nb(argc - 1);
    write(1, "\n", 1);
}