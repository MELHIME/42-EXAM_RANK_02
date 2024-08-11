#include <unistd.h>
#include <stdio.h>
void	print_bits(unsigned char octet)
{
    int i = 128;
    while(i > 0)
    {
        if (octet >= i)
        {
            write(1, "1", 1);
            octet = octet - i;
        }
        else
            write(1, "0", 1);
        i = i / 2;
    }
}

unsigned char	reverse_bits(unsigned char octet)
{
    int tab[8] = {0};
    int i = 128;
    int j = 0;
    unsigned char c = 0;

    while(i > 0)
    {
        if (octet >= i)
        {
            tab[j] = 1;
            octet = octet - i;
        }
        else
            tab[j] = 0;
        i = i / 2;
        j++;
    }
    j = 0;
    while (j < 8)
    {
        printf("%d" , tab[j]);
        j++;
    }
    printf("------\n");
    j--;
    while (j >= 0)
    {
        c = c << 1;
        if (tab[j] == 1)
            c = c | 1;
        j--;
    }
    return (c);
}

unsigned char	swap_bits(unsigned char octet)
{
    return(octet << 4 | octet >> 4);
}

//-------------------------------------------------------
char to_lower(char c)
{
    if(c >= 'A' && c <= 'Z')
        c = c + 32;
    return (c);
}

int get_number(char c, int base)
{
    int max;
    if (base <= 10)
        max = base + 48;
    else
        max = base - 10 + 'a';

    if (c >= '0' && c <= '9' && c <= max)
        return(c - 48);
    else if (c >= 'a' && c <= 'f' && c <= max)
        return(c + 10 - 'a');
    else
        return(-1);
}

int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int n;
    int res = 0;
    int sign = 1;

    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while ((n = get_number(to_lower(str[i]), str_base)) >= 0)
    {
        res = res * str_base;
        res = res + (n * sign);
        i++;
    }
    return(res);

}
//--------
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

#include <string.h>
#include <stdlib.h>
// int main (int c, char *v[])
// {
//     int i = 0;
//     int j = 0;
//     int a = 0;
//     char *str;
//     if (c >= 2)
//     {
//         while (v[1][i] == ' ' || v[1][i] == '\t')
//             i++;
//         while (v[1][i + j] && v[1][i + j] != ' ' && v[1][i + j] != '\t')
//         {
//             j++;
//         }
//         str = malloc(j + 1);
//         if (!str)
//             return (0);
//         j = 0;
//         while (v[1][i] && v[1][i] != ' ' && v[1][i] != '\t')
//         {
//             str[j] = v[1][i];
//             j++;
//             i++;
//         }
//         str[j] = '\0';
//         while (v[1][i] == ' ' || v[1][i] == '\t')
//             i++;
//         while (v[1][i])
//         {
//             if ((v[1][i] == ' ' || v[1][i] == '\t') && (v[1][i + 1] == ' ' || v[1][i + 1] == '\t'))
//                 i++;
//             else
//             {
//                 write(1, &v[1][i], 1);
//                 i++;
//                 a = 1;
//             }    

//         }
//         if (a == 1)
//             write (1, " ", 1);
//         write(1, str, ft_strlen(str));
//         free(str);
//     }
//     write(1, "\n", 1);
// }
int main (int c, char *v[])
{

    int i;
    int nb;
    if (c == 2)
    {
        i = 2;
        nb = atoi(v[1]);
        if (nb == 1)
            printf("1");
        while (nb >= i)
        {
            if (nb % i == 0)
            {
                printf("%d", i);
                if (nb == i)
                    break;
                printf("*");
                nb = nb / i;
                i = 1;
            }
            i++;
        }
    }
    printf("\n");
}