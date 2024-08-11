#include <stdlib.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int somme = 0;

	while(str[i] && str[i] == ' ')
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign = -1;
		i++;
		if (str[i] == 45 || str[i] == 43)
			return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		somme *=  10;
		somme += (str[i] - 48);
		i++;
	}
	somme = somme * sign;
	return (somme);
}

int main()
{
	printf("%d", ft_atoi("  - --40"));
}