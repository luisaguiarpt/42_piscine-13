#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str);
void	ft_putnbr(int n);

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	len;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		len = par[i].size;
		ft_putnbr(len);
		write(1, "\n", 1);
		ft_putstr(par[i++].copy);
		write(1, "\n", 1);
	}
}

void	ft_putnbr(int n)
{
	int	p;

	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	p = n % 10 + '0';
	write(1, &p, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int	main(int ac, char **av)
{
	t_stock_str	*tab;

	tab = ft_strs_to_tab(ac - 1, &av[1]);
	ft_show_tab(tab);
}
