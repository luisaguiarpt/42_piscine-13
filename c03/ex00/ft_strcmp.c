int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s1 = "";
	char	*s2 = "Hello";

	printf("mine: %i\n", ft_strcmp(s1, s2));
	printf("orig: %i\n", strcmp(s1, s2));
}
