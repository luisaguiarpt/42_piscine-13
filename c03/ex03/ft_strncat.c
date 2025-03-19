char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char			d1[13] = "Hello, ";
	char			*s1 = "World!";
	char			d2[13] = "Hello, ";
	char			*s2 = "World!";
	unsigned int	n = 6;

	printf("mine: %s\n", ft_strncat(d1, s1, n));
	printf("orig: %s\n", strncat(d2, s2, n));
	for (int i = 0; i < 13; i++)
	{
		printf("|%i|", d1[i]);
	}
	printf("\n");

	for (int i = 0; i < 13; i++)
	{
		printf("|%i|", d1[i]);
	}
	printf("\n");

}
