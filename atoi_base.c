char set_low(char c)
{
    if(c >= 'A' && c <= 'Z')
        c += 32;
    return c;
}

int get_n(char c, int base)
{
    int max;
    if (base <= 10)
        max = base + 48;
    else
        max = base - 10 + 'a';
    if (c <= '9' && c >= '0' && c <= max)
        return(c - 48);
    else if(c >= 'a' && c<= 'f' && c <= max)
        return(c + 10 - 'a');
    else
        return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
    int res = 0;
    int n;
    int i = 0;
    int sign = 1;

    if(str[i] == 45)
    {
        sign = -1;
        i++;
    }
    while((n = get_n(set_low(str[i]), str_base)) >= 0)
    {
        res = res * str_base;
        res = res + (n * sign);
        i++;
    }
    return(res);
}

#include <stdio.h>

int main ()
{
    printf("%d", ft_atoi_base("01000001", 2));
}