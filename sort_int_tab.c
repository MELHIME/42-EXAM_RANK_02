void sort_int_tab(int *tab, unsigned int size)
{
    int j = 0;
    int k = 0;
    int i = 0;
    while (i < size)
    {
        k = i + 1;
        while(k < size)
        {
            if (tab[k] < tab[i])
            {
                j = tab[i];
                tab[i] = tab[k];
                tab[k] = j;
            }
            k++;
        }
        i++;
    }
}
#include <stdio.h>

int main()
{
    int tab[11] = {0, 6, 4, 9, 1, 0, 8, -100, 1000, 1337, 1};
    
    int i = 0;
    while (i < 11)
    {
        printf("%d\n", tab[i]);
        i++;
    }
    printf("---------------\n");
    
    sort_int_tab(tab, 11);
    i = 0;
    while (i < 11)
    {
        printf("%d\n", tab[i]);
        i++;
    }
}