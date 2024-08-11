#include <stdlib.h>

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}
char    *ft_strdup(char *s)
{
    char *str;
    int i = 0;

    str = malloc(ft_strlen(s) + 1);
    if (!str)
        return (NULL);
    while (s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}