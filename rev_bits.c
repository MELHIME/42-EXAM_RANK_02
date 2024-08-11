#include <unistd.h>
#include <stdio.h>
void	reverse_bits(unsigned char octet)
{
    int tab[8] = {0};
    int i = 128;
    int j = 0;
    unsigned char b = 0;
    //--------------------------------
    while(i > 0 && j < 8)
    {
        if (octet >= i)
        {
            tab[j] = 1;
            octet = octet - i;
        }
        else
            tab[j] = 0;
        j++;
        i = i / 2;
    }
    //--------------------------------------
    int k;
    i = 0;
    j = 7;
    while(i < j)
    {
        k = tab[i];
        tab[i] = tab[j];
        tab[j] = k;
        i++;
        j--;
    }
    //------------------------------------
    j = 0;
    while (j < 8)
    {
        b = b << 1;
        if (tab[j] == 1)
            b = b | 1;
        j++;
    }
    return (b);
    //------------------------------------
    // i = 128;
    // while(i > 0)
    // {
    //     if(b >= i)
    //     {
    //         write(1, "1", 1);
    //         b = b - i;
    //     } 
    //     else
    //         write(1, "0", 1);
    //     i = i / 2;
    // }
    //---------------------------------------
    // j = 0;
    // while (j < 8)
    // {
    //     printf("%d\n", tab[j]);
    //     j++;
    // }
}

int main()
{
    reverse_bits(2);

}