void	ft_itoa(int nbr, char *base, char *str)
{
	int			size;
	long int	n;

	size = 0;
	n = (long int) nbr;
	while (base[size])
		size++;
	if (n < 0)
	{
		n *= -1;
		*str= '-';
	}
	if (n == 0)
	{
		return ;
	}
	if (n > 0)
	{
		str++;
		ft_itoa(n / size, base, str);
		*str = base[n % size];
	}
}

#include <stdio.h>

int	main(void)
{
	int nbr = -42;
	char base[10] = "01";
	char str[20] = "";

	ft_itoa(nbr, base, str);
	printf("%i in base \"%s\" = %s\n", nbr, base, str);
}
