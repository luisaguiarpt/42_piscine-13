#include <stdio.h>

int	main(void)
{
	int a;
	int	*ptr;

	ptr = &a;
	
	printf("conteudo: %i, address: %p\n", *ptr, ptr);
}
