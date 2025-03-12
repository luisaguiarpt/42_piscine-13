#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str = "AS DKJHSD";
	printf("%i", ft_str_is_printable(str));
	return (0);
}
