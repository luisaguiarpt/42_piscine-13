#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[12] = "Hello wolrd";
	printf("%s", ft_strupcase(str));
	return (0);
}
