int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = -1;
	while (++i < length - 1)
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			return (0);
	return (1);
}

int	ft_dif(int a, int b)
{
	return (a - b);
}

#include <stdio.h>

int	main(void)
{
	int tab[5] = {0, 1, 2, 5, 4};

	printf("%i\n", ft_is_sort(&tab[0], 5, &ft_dif));
}
