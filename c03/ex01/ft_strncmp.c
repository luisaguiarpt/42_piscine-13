int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 || *s2) && i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s1 = "Heula";
	char	*s2 = "Hello";
	int		n = 3;
	printf("mine: %i\n", ft_strncmp(s1, s2, n));
	printf("orig: %i\n", strncmp(s1, s2, n));
}
