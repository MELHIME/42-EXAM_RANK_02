#include <stdio.h>

void    swap(int *a, int *b)
{
    int k;

    k = *a;
    *a = *b;
    *b = k;
}
int main ()
{
    int a = 2;
    int b = 3;
    printf("a = %d... b = %d  \n", a, b);
    swap(&a, &b);
    printf("a = %d... b = %d  \n", a, b);
}