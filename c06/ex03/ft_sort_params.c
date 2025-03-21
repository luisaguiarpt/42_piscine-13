#include <unistd.h>

void	ft_putstr(char *str);
int	ft_strcmp(char *s1, char *s2);

int	main(int ac, char **av)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			tmp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < ac)
		ft_putstr(av[i++]);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &(*str++), 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
	}	
	return (*s1 - *s2);
}
