#include <unistd.h>
#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
    unsigned char c = octet << 4 | octet >> 4;
    // unsigned char r = c;
    // int i = 128;
    // while(i > 0)
    // {
    //     if(r >= i)
    //     {
    //         write(1, "1", 1);
    //         r = r - i;
    //     } 
    //     else
    //         write(1, "0", 1);
    //     i = i / 2;
    // }
    return (c);
}

int main ()
{
    swap_bits(65);
}