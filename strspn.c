#include <string.h>
#include <stdio.h>

int check(char *s, char c)
{
    int i = 0;
    while (s[i])
    {
        if(s[i] == c)
            return (1);
        i++;
    }
    return(0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    while(s[i])
    {
        if(check((char *)accept, s[i]) == 0)
            break;
        i++;
    }
    return(i);
}

int main()
{
    printf("%zu\n", strspn("JOKERJOKER", "JOKER"));
    printf("%zu\n", ft_strspn("JOKERJOKER", "JOKER"));
}