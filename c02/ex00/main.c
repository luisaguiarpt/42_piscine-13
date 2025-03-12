#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[14] = "Hello, world!";
	char	dest[10];

	printf("%s\n", ft_strcpy(dest, src));
	char src2[14] = "Hello, world!";
	char dest2[10];
	printf("%s", strcpy(dest2, src2));
	return (0);
}
