#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int size = 15;
	int tab[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int ct = 0;
	
	while (ct < size)
	{
		printf("%i ", tab[ct]);
		ct++;
	}
	ft_rev_int_tab(tab, size);
	printf("\n");
	ct = 0;
	while (ct < size)
	{
		printf("%i ", tab[ct]);
		ct++;
	}
}
