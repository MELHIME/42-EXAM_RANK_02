#include <unistd.h>

void    put_char(char c)
{
    write(1, &c, 1);
}

int main (int argc, char *argv[])
{
    int i = 0;

    if (argc == 4)
    {
        if (!argv[2][1] && !argv[3][1])
        {
            while(argv[1][i])
            {
              if (argv[1][i] == argv[2][0])
                put_char(argv[3][0]);
             else
                put_char(argv[1][i]);
            i++;
            }
        }
    }
    write(1, "\n", 1);
}