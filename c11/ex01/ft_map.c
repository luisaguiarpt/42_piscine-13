#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*mapped;

	i = -1;
	if (!(mapped = malloc(length * sizeof(int))))
		return (NULL);
	while (++i < length)
		mapped[i] = (*f)(tab[i]);
	return (mapped);
}

int	mult_42(int n)
{
	int	r;

	return (r = n * 42);
}

int	main(void)
{
	int	arr[4] = {0, 42, -42, 8000003};
	ft_map(arr, 4, &mult_42);
}
