#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int x = 4;
	int	*ptr = &x;
	int **ptr2 = &ptr;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;
	int *********ptr9 = &ptr8;

	printf("value: %i | address: %p\n", x, &x);
	printf("value: %i | address: %p\n", *ptr, ptr);
	printf("value: %i | address: %p\n", **ptr2, ptr2);
	printf("value: %i | address: %p\n", ***ptr3, ptr3);
	printf("value: %i | address: %p\n", ****ptr4, ptr4);
	printf("value: %i | address: %p\n", *****ptr5, ptr5);
	printf("value: %i | address: %p\n", ******ptr6, ptr6);
	printf("value: %i | address: %p\n", *******ptr7, ptr7);
	printf("value: %i | address: %p\n", ********ptr8, ptr8);
	printf("value: %i | address: %p\n", *********ptr9, ptr9);
	ft_ultimate_ft(ptr9);
	printf("%i", *********ptr9);
	return (0);
}
