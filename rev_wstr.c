#include <unistd.h>

int ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

int main (int c, char *v[])
{
	int i = 0;
	int j = 0;
	int a = 0;

	if (c == 2)
	{
		while (v[1][i])
			i++;
		a = i;
		i--;
		while (i > 0)
		{
			while (i >= 0 && (v[1][i] != ' ' && v[1][i] != '\t'))
				i--;
			j = i - 1;
			if (j < 0)
				j = 0;
			i++;
			if (a != ft_strlen(v[1]))
				write(1, " ", 1);
			while (v[1][i] && (v[1][i] != ' ' && v[1][i] != '\t'))
			{
				write(1, &v[1][i], 1);
				i++;
			}
			a = j;
			i = j;
		}
		
	}
	write(1, "\n", 1);
}
//    a
//  j      
//  i     
// "THE JOKER IS HERE" = 17
//          8  11

// i = 0
// j = 0
// a = 2
// HERE IS JOKER THE$