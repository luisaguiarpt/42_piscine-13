char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	d1[13] = "";
	char	*s1 = "world";
	char	d2[13] = "";
	char	*s2 = "world";

	printf("mine: %s\n", ft_strcat(d1, s1));
	printf("orig: %s\n", strcat(d2, s2));
}
