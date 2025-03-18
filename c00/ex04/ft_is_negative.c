#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}

int	main(void)
{
	int n = -1;
	int z = 0;
	int p = 1;

	ft_is_negative(n);
	write(1, "\n", 1);
	ft_is_negative(z);
	write(1, "\n", 1);
	ft_is_negative(p);
	write(1, "\n", 1);
}
