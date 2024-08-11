#include <stdio.h>

char    *ft_strrev(char *str)
{
    char c;
    int i = 0, j = 0;

    while (str[j])
        j++;
    j--;
    while(i < j)
    {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }
    return(str);
}

int main()
{
    char str[20] = "JOKER IS HERE";
    ft_strrev(str);
    printf("%s\n", str);
}