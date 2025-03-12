#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int i;
	int j;
	int *a;
	int *b;

	i = 50;
	j = 40;
	a = &i;
	b = &j;
	printf("a: %i | &a: %p\n", *a, a);
	printf("b: %i | &b: %p\n", *b, b);
	ft_ultimate_div_mod(a, b);
	printf("a: %i | &a: %p\n", *a, a);
	printf("b: %i | &b: %p\n", *b, b);
}
