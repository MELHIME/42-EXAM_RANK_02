#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;
    int a = 0;
    if(argc == 2)
    {
        while (argv[1][i] && argv[1][i] == ' ')
            i++;
        while(argv[1][i] && argv[1][i] != ' ')
        {
            write(1, &argv[1][i], 1);
            i++;
        }
        while (argv[1][i])
        {
            while(argv[1][i] && argv[1][i] == ' ')
                i++;
            while(argv[1][i] && argv[1][i] != ' ')
            {
                if (a == 0)
                {
                    write(1, "   ", 3);
                    a = 1;
                }
                write(1, &argv[1][i], 1);
                i++;
            }
            if(argv[1][i] != '\0')
            {
                i++;
                a = 0;
            }
        }

    }
    write (1, "\n", 1);
}
