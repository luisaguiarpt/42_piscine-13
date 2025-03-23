
#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*mapped;
	int	*tmp;

	if (!(mapped = malloc(length * sizeof(int *))))
		return (NULL);
	tmp = mapped;
	while (i < length)
	{
		if (!(mapped = malloc(sizeof(int))))
			return (NULL);
		*(mapped++) = (*f)(tab[i++]);
	}
	return (tmp);
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
