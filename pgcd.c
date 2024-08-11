#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int min, max, i = 1, r ;
    if(argc == 3)
    {
        min = atoi(argv[1]);
        max = atoi(argv[2]);
        if (min > max)
        {
            r = min;
            min = max;
            max = r;
        }
        while(i <= min)
        {
            if(min % i == 0 && max % i == 0)
                r = i;
            i++;
        }
        printf("%d", r);

    }
    printf("\n");
}