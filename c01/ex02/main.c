#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a = 1;
	int b = 2;
	int *ptra;
	int *ptrb;

	ptra = &a;
	ptrb = &b;

	a = *ptra;
	b = *ptrb;

	printf("a before: %i\n", a);
	printf("b before: %i\n", b);

	ft_swap(&a, &b);

	printf("a after: %i\n", a);
	printf("b after: %i\n", b);
}
