#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int i;

    if(a == 0 || b == 0)
        return(0);
    if (a > b)
		i = a;
	else
		i = b;
    while (1)
    {
        if(i % a == 0 && i % b == 0)
            return(i);
        i++;
    }
}

int main()
{
    printf("%u", lcm(100, 10));
}