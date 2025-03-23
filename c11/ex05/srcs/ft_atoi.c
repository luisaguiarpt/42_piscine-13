int	is_space(char c);

int	ft_atoi(char *str)
{
	int	n;
	int minus;

	n = 0;
	minus = 1;
	while (is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			minus *= -1;
	while (*str >= '0' && *str <= '9')
		n = (n * 10) + *str++ - '0';
	return (n * minus);
}

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
	   return (1);
	return (0);	
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "		---1234sad";

	printf("%i\n", ft_atoi(str));
}
*/
