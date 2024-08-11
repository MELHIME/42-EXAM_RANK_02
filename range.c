#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
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
            tab[i] = start;
            start++;
            i++;
        }
    }
     if (start >= end)
    {
        while(start >= end)
        {
            tab[i] = start;
            start--;
            i++;
        }
    }
    return(tab);
    }
    int main()
    {
        int i = 0;
        int *tab;
        tab = ft_range(0, -2);
        while(i < 3)
        {
            printf("%d\n", tab[i]);
            i++;
        }
    }