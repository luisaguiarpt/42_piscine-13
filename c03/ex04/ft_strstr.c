int	ft_strlen(char *str);
int	is_match(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	if (ft_strlen(to_find) == 0)
		return (str);
	while (*str)
	{
		if (is_match(str, to_find))
			return (str);
		str++;
	}
	return ((void *)0);
}

int	is_match(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] && i < ft_strlen(to_find))
	{
		if (str[i] != to_find[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
//	char	*hay = "Find the needle in the haystack!";
	char	*hay = "";
	char	*nee = "zak";

	printf("mine: %s\n", ft_strstr(hay, nee));
	printf("orig: %s\n", strstr(hay, nee));
}
