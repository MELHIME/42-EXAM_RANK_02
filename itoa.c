#include <unistd.h>
#include <stdlib.h>


int nbr_len(int n)
{
    int i = 0;
    if (n == 0)
        return (1);
    if (n < 0)
        i = 1;
    while(n)
    {
        n /= 10;
        i++;
    }
    return i;
}

char *ft_itoa(int nbr)
{
    char *str;
    int n = nbr;
    int i = nbr_len(nbr);

    str = malloc(i + 1);
    if (n < 0)
        n = -n;
    str[i] = '\0';
    i--;
    while(n >= 0 && i >= 0)
    {
        str[i] = ((n % 10) + 48);
        n = n / 10;
        i--;
    }
    if(nbr < 0)
        str[0] = '-';
    return(str);

}

#include <stdio.h>
int main ()
{
    printf("%s", ft_itoa(155));
}