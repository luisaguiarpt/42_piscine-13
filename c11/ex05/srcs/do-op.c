#include "operators.h"
#include "error_msg.h"
#include "aux.h"
#include <unistd.h>

void	ft_putstr(char *str);
int		do_op(int a, int b, char *op);

int	main(int ac, char **av)
{
	char *op;

	op = av[2];
	if (ac != 4)
		return (0);
	if (*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%')
	{
		ft_putstr("0");
		write(1, "\n", 1);
		return (0);
	}
	if (ft_atoi(av[3]) == 0 && (*op == '/' || *op == '%'))
	{
		if (*op == '/')
			ft_putstr(DIV_ZERO);
		if (*op == '%')
			ft_putstr(MOD_ZERO);
		write(1, "\n", 1);
		return (0);
	}	
	ft_putnbr(do_op(ft_atoi(av[1]), ft_atoi(av[3]), op));
	write(1, "\n", 1);
	return (0);
}

int	do_op(int a, int b, char *op)
{
	int (*operations[])(int, int) = {ft_add, ft_sub, ft_mult, ft_div, ft_mod};

	if (*op == '+')
		return ((*operations[0])(a, b));
	if (*op == '-')
		return ((*operations[1])(a, b));
	if (*op == '*')
		return ((*operations[2])(a, b));
	if (b == 0)
	{
		if (*op == '/')
			ft_putstr(DIV_ZERO);
		if (*op == '%')
			ft_putstr(MOD_ZERO);
		return (0);
	}
	if (*op == '/')
		return ((*operations[3])(a, b));
	if (*op == '%')
		return ((*operations[4])(a, b));
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
