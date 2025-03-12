#include <stdio.h> 

void	ft_ft(int *nbr);

int	main(void)
{
	int a = 50;
	int	*ptr;

	ptr = &a;
	ft_ft(ptr);
	printf("%i", a);
	return (0);
}
