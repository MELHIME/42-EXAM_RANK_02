#include <string.h>
#include <stdio.h>
char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j = 0;
    while(s1[i])
    {
        j= 0;
        while (s2[j])
        {
            if (s1[i] == s2[j])
                return((char *)&s1[i]);
            j++;
        }
    i++;
    }
    return(NULL);
}
int main()
{
    printf("%lu\n", ft_strpbrk("KOJ", "JOKER"));
    //printf("%s\n", ft_strpbrk("JOKER", "KO"));
}