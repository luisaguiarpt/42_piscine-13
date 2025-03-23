int	ft_any(char **tab, int(*f)(char*))
{
	while (*tab)
		if (!((*f)(*tab++)))
			return (0);
	return (1);
}

int	is_lower(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>

int main(void)
{
	char *tab[4] = {"hello", "im", " luis", 0};

	printf("%i\n", ft_any(tab, *is_lower));	
}
