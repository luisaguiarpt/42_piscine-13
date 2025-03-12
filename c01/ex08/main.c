#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[] = {2,5,3,26,9,344,8,0,84553,5,8,9};
	int size = 12;
	int i = 0;

	while (i < size - 1)
	{
		printf("%i ", tab[i]);
		i++;
	}
	ft_sort_int_tab(tab, size);
	printf("\n");
	i = 0;
	while (i < size - 1)
	{
		printf("%i ", tab[i]);
		i++;
	}
}