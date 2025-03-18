#include <unistd.h>

int	order(int n);
int	is_ascending(int nbr);
void	ft_putnbr(int nbr, int n);
int	biggest_ordered(int n);

void	ft_print_combn(int n)
{
	int	o;
	int	nbr;

	nbr = 1;
	while (nbr <= biggest_ordered(n))
	{
		if (is_ascending(nbr))
		{
			ft_putnbr(nbr, n);
			if (nbr != biggest_ordered(n))
				write(1, ", ", 2);
		}
		nbr++;
	}
}

int	biggest_ordered(int n)
{
	int	big;

	big = 123456789;
	return (big % order(n));
}

int	order(int n)
{
	int	order;

	order = 1;
	while (n-- > 0)
	{
		order *= 10;
	}
	return (order);
}

int	is_ascending(int nbr)
{
	int	asc;

	if (nbr == 0)
		return (1);
	if (nbr % 10 <= (nbr / 10) % 10)
	{
		asc = 0;
		return (asc);
	}
	else
	{
		asc = is_ascending(nbr / 10);
		return (asc);
	}
}

void	ft_putnbr(int nbr, int n)
{
	char	c;

	if (--n > 0)
	{
		ft_putnbr(nbr / 10, n);
	}
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

#include <stdio.h>

int	main(void)
{
/*	int n = 777777;
	printf("is_ascending(%i) = %i\n", n, is_ascending(n));
	ft_putnbr(42, 3);
	write(1, "\n", 1);
	printf("%i\n", order(3));
	write(1, "\n", 1);
	for (int i = 0; i < 10; i++)
		printf("%i\n", biggest_ordered(i));
*/
	ft_print_combn(9);
}
