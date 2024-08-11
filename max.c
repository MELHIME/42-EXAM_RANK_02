#include <stdio.h>
int		max(int *tab, unsigned int len)
{
    unsigned int i = 1;
    if (len == 0)
        return (0);
    int max = tab[0];
    while (i < len)
    {
        if(tab[i] > max)
            max = tab[i];
        i++;
    }
    return(max);
}

int main ()
{
    int tab[8]={1, 2, 3, 4, 7, 4, 5, 6};
    printf("%d", max(tab, 8));
}