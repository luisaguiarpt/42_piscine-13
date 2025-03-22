void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}


#include <unistd.h>

void	ft_putnbr(int n)
{
	int	d;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	d = n % 10 + '0';
	write(1, &d , 1);
}

int	main(void)
{
	int	arr[12] = {0, 13, 42, -42, 2147483647, -2147483648, 1337, -80085, 80085, 10, 11, 12};

	ft_foreach(arr, 12, &ft_putnbr);
}
