#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int *tab;
    int len = end - start + 1;
    if(start > end)
        len = start - len + 1;

    tab = malloc(len * 4);
    if (start < end)
    {
        while(start <= end)
        {
            tab[i] = end;
            end--;
            i++;
        }
    }
     if (start >= end)
    {
        while(start >= end)
        {
            tab[i] = end;
            end++;;
            i++;
        }
    }
    return(tab);
    }
    int main()
    {
        int i = 0;
        int *tab;
        tab = ft_rrange(5, -5);
        while(i < 11)
        {
            printf("%d\n", tab[i]);
            i++;
        }
    }