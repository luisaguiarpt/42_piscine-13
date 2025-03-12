int	ft_isspace(char c);
int	is_match(char nee, char *hay);

char	*get_nb_in_base(char *str, char *base)
{
	char	*nb_base[100];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nb_base++ = '-';
		i++;
	}
	while (str[i])
	{
		if (is_match(str[i], base))
			*nb_base++ = str[i];
		else
			return (NULL);
		i++;
	}
	return (nb_base);
}

int	is_match(char nee, char *hay)
{
	while (*hay)
	{
		if (*hay == nee)
			return (1);
		hay++;
	}
	return (0);
}

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char *str[20] = "     +0d3fr";
	char *base[20] = "0123456789abcdef";

	printf("%s", get_nb_in_base(str, base));
}
