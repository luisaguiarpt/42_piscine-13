#include <stdlib.h>
char	*ft_strndup(char *str, int len);
int		count_words(char *str, char *charset);
int		is_sep(char c, char *sep);
int		ft_strlen(char *str);

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		len;

	i = 0;
	if (!(arr = malloc((count_words(str, charset) + 1) * sizeof(char *))))
		return (NULL);
	while (*str)
	{
		len = 0;
		while (is_sep(*str, charset) && *str)
			str++;
		while (!is_sep(*str, charset) && *str)
		{
			str++;
			len++;
		}
		arr[i++] = ft_strndup(&str[-len], len);
	}
	arr[i] = 0;
	return (arr);
}

char	*ft_strndup(char *str, int len)
{
	char	*dup;
	int		i;

	i = 0;
	if (!(dup = malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (str[i] && i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

int	count_words(char *str, char *charset)
{
	int	wd;

	wd = 0;
	while (*str)
	{
		while (is_sep(*str, charset) && *str)
			str++;
		if (!is_sep(*str, charset) && *str)
			wd++;
		while (!is_sep(*str, charset) && *str)
			str++;
	}
	return (wd);
}

int	is_sep(char c, char *sep)
{
	while (*sep)
	{
		if (c == *sep)
			return (1);
		sep++;
	}
	return (0);
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

int	main(void)
{
	char	*str = "hello, my name is Marvin! From out; and from about :)";
	char	*sep = " ,.;";

	char	**arr;
	arr = ft_split(str, sep);
	while (*arr)
	{
		printf("%s\n", *arr);
		arr++;
	}
}
