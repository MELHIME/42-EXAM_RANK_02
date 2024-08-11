#include <unistd.h>

int is_rpt(char *s, int *n)
{
    int i = 0;
    while (i < *n)
    {
        if(s[i] == s[*n])
            return(1);
        i++;
    }
    return (0);
}
int main(int argc, char *argv[])
{
    int i = 0;
    int j = 0;

    if (argc == 3)
    {
        
        while(argv[1][i])
        {
            if (is_rpt(argv[1], &i) == 0)
            {
                j = 0;
                while(argv[2][j])
                {
                    if(argv[1][i] == argv[2][j])
                    {
                        write(1, &argv[1][i], 1);
                        break;
                    }
                    j++;
                }
            }
            i++;
        }

    }
    write(1, "\n", 1);
}