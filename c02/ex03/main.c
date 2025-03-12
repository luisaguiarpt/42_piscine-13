#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char *str_alpha = "163435982398s243234";
	char *str_num = "8981779139329837813";

	ft_str_is_numeric(str_alpha);
	ft_str_is_numeric(str_num);
	printf("alpha: %i\n",	ft_str_is_numeric(str_alpha));
	printf("num: %i\n",	ft_str_is_numeric(str_num));
}
