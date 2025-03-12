#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[14] = "Hello, worl";
	char	dest[7];
	unsigned int n = 7;
	int i = 0;

	ft_strncpy(dest, src, n);
	while (i < n)
	{
		printf("%c | ", dest[i]);
		i++;
	}
	i = 0;
	printf("\n");
	while (i < n)
	{
		printf("%i | ", dest[i]);
		i++;
	}
	return (0);
}
