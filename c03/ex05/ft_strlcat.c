unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	tlen;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size < ft_strlen(dest))
		return (tlen = size + ft_strlen(src));
	else
		tlen = ft_strlen(dest) + ft_strlen(src);
	while (dest[i])
		i++;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (tlen);
}

unsigned int	ft_strlen(char *str)
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
	unsigned int	n = 15;
	char			d1[20] = "HelloWorld";
	char			*s1 = " 42!";
	char			d2[20] = "HelloWorld";
	char			*s2 = " 42!";
	int				len1 = ft_strlcat(d1, s1, n);
	int				len2 = strlcat(d2, s2, n);

	printf("mine: %s|len: %i\n", d1, len1);
	printf("orig: %s|len: %i\n", d2, len2);
}
