#include <unistd.h>

void puts(char *s)
{
    int i = 0;
    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}

int main (int argc, char *argv[])
{
    int i = 1;
    int j = 0;
    if (argc >= 2)
    {
        while (argv[i])
        {
            while (argv[i][j])
            {
                if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
                    argv[i][j] = argv[i][j] + 32;
                j++;
            }
            if(argv[i][0] >= 'a' && argv[i][0] <= 'z')
                argv[i][0] = argv[i][0] - 32;
            j = 0;
            while (argv[i][j])
            {
                if (argv[i][j] >= 'a' && argv[i][j] <= 'z' && (((argv[i][j - 1] == ' ' || argv[i][j - 1] == '\t'))))
                    argv[i][j] = argv[i][j] - 32;
                j++;
            }
            puts(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}