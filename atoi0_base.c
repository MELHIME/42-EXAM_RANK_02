int ft_strlen(const char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}

int check(char *s, char c, int x)
{
    int i = 0;
    while (s[i] && i < x)
    {
        if(s[i] == c)
            return (1);
        i++;
    }
    return(0);
}

int	ft_strspn(char *s, char *accept, int x)
{
    int i = 0;
    while(s[i])
    {
        if(check((char *)accept, s[i], x) == 0)
            break;
        i++;
    }
    return(i);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int get_digit(char c, int digits_in_base)
{
	int max_digit;
	if (digits_in_base <= 10)
		max_digit = digits_in_base + '0';
	else
		max_digit = digits_in_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	char acc[] = "0123456789abcdef";
	if(ft_strspn((char *)str, acc, str_base) != ft_strlen(str))
		return 0;
	int result = 0;
	int sign = 1;
	int digit;

	if (*str == '-')
	{
		sign = -1;
		++str;
	}

	while ((digit = get_digit(to_lower(*str), str_base)) >= 0)
	{
		result = result * str_base;
		result = result + (digit * sign);
		++str;
	}
	return (result);
}

#include <stdio.h>

int main ()
{
    printf("%d", ft_atoi_base("213", 16));
}