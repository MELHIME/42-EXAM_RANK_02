#include <unistd.h>
#include <stdlib.h>

void putn(int n)
{
    if (n >= 10)
        putn(n / 10);
    write(1, &"0123456789"[n%10], 1);
}
int main (int argc, char *argv[])
{
    int i = 1;
    int res, n;
    if(argc == 2)
    {
        n = atoi(argv[1]);
        while(i <= 9)
        {
            res = i * n;
            putn(i);
            write(1, " x ", 3);
            putn(n);
            write(1, " = ", 3);
            putn(res);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}