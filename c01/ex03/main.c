#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a = 22;
	int b = 5;
	int *div;
	int *mod;

	div = &a;
	mod = &b;
	printf("a: %i | &a: %p\n", a, &a);
	printf("b: %i | &b: %p\n", b, &b);
	ft_div_mod(a, b, div, mod);
	printf("div - a: %i | &a: %p\n", a, div);
	printf("mod - b: %i | &b: %p\n", b, mod);

	
	
	printf("div: %p | mod: %p\n", div, mod);
}
