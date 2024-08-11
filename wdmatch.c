#include <unistd.h>

void    puts(char *s)
{
    int i = 0;
    while(s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}

int slen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

int main (int argc, char *argv[])
{
    int i = 0;
    int j = 0;
    int count = 0;
    if (argc == 3)
    {
        while (argv[1][i])
        {
            while(argv[2][j])
            {
                if (argv[1][i] == argv[2][j])
                {
                    count++;
                    break;
                }
                j++;
            }
            if(count == slen(argv[1]))
                {
                    puts(argv[1]);
                    return(0);
                }
            i++;
        }
    }
    write(1, "\n", 1);
}