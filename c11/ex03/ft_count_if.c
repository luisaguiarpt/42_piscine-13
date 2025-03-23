int	ft_count_if(char **tab, int	length, int(*f)(char*))
{
	int	ct;

	ct = 0;
	while (length--)
		if ((*f)(*tab++))
			ct++;
	return (ct);
}

int	is_lower(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>

int main(void)
{
	char *tab[5] = {"hello", "im", "luis", "Hi there", "019"};

	printf("%i\n", ft_count_if(tab, 5, *is_lower));	
}
