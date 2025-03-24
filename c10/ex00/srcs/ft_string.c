#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_puterr(char *err)
{
	while (*err)
		write(2, err++, 1);
}
