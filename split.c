#include <stdlib.h>

int count(char *s)
{
    int i = 0;
    int wrd = 0;
    int a = 1;
    
    while (s[i])
    {
        if (s[i] != ' ' && s[i] != '\t' && a == 1)
        {
            wrd++;
            a = 0;
        }
        if(s[i] == ' ' || s[i] == '\t')
            a = 1;
        i++;
    }
    return(wrd);
}

char **ft_split(char *str)
{
    char **s;
    int i = 0;
    int j = 0;
    int k = 0;
    int o = 0;

    s = malloc((count(str) + 1) * sizeof(char *));
    if (!s)
        return (NULL);
    while(j < count(str))
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        k = 0;
        while (str[i + k] && str[i + k] != ' ' && str[i + k] != '\t' && str[i] != '\n')
            k++;
        s[j] = malloc(k + 1);
        if (!s[j])
            return(NULL);
        o = 0;
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && o < k)
        {
            s[j][o] = str[i];
            o++;
            i++;
        }
        s[j][o] = '\0';
        j++;
    }
    s[j] = NULL;
    return(s);
}

#include <stdio.h>
int main()
{
    char **ss;
    char str[50] = "  starting and ending    ";
    ss = ft_split(str);
    printf("%s", ss[0]);
}
