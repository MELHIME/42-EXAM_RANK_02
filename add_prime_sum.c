#include <unistd.h>

void put_nbr(int n)
{
    if (n >= 10)
        put_nbr(n / 10);
    write(1, &"0123456789"[n%10], 1);
}
int ft_atoi(char *s)
{
    int i = 0;
    int somme = 0;
    int sign = 1;
    while(s[i] && s[i] == ' ')
        i++;
    if(s[i] == 45 || s[i] == 43)
    {
        if (s[i + 1] == 45 || s[i + 1] == 43)
            return (0);
        if (s[i] == 45)
            sign = -1;
        i++;
    }
    while(s[i] && s[i] <= '9' && s[i] >= '0')
    {
        somme = somme * 10;
        somme += (s[i] - 48);
        i++;
    }
    return (somme * sign);
}

int is_prime(int n)
{
    if (n == 0 || n == 1)
        return (0);
    int i = 2;
    while(i <= n / 2)
    {
        if(n % i == 0)
            return (0);
        i++;
    }
    return (1);
}


int main(int argc, char *argv[])
{
    int somme = 0;
    int i = 2;
    if (argc != 2 || ft_atoi(argv[1]) < 0)
    {
        write(1, "0", 1);
        write(1, "\n", 1);
        return(0);
    }
    if (argc == 2)
    {
        while(i <= ft_atoi(argv[1]))
        {
            if(is_prime(i) == 1)
                somme += i;
            i++;
        }

    }
        put_nbr(somme);
        write(1, "\n", 1);
    return(0);
}