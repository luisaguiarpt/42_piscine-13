#include <unistd.h>

void	ft_putstr(char *str);

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 1)
		return (0);
	while (i < ac)
		ft_putstr(av[i++]);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		str++;
	}
	write(1, "\n", 1);
}
