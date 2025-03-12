#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char *str_alpha = "askjfaasdasda4njvjvamk";
	char *str_num = "asd7asdknjanjk83";

	ft_str_is_alpha(str_alpha);
	ft_str_is_alpha(str_num);
	printf("alpha: %i\n",	ft_str_is_alpha(str_alpha));
	printf("num: %i\n",	ft_str_is_alpha(str_num));
}
