#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *str = "123456789012";
	int a;

	a = strlen(str);
//	a = ft_strlen(str);
	printf("String: %s\nSize: %i\n", str, a);
}
