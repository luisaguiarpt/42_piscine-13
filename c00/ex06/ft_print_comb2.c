#include <unistd.h>

void	ft_putnbr(int a);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_putnbr(a);
			write(1, " ", 1);
			ft_putnbr(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

void	ft_putnbr(int a)
{
	char	d;
	char	u;

	
	if (a < 100)
	{
		d = a / 10 + '0';
		u = a % 10 + '0';
		write(1, &d, 1);
		write(1, &u, 1);
	}
}

int	main(void)
{
	ft_print_comb2();
}
