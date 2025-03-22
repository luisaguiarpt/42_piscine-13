#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *str);
int		ft_strlen(char *str);

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*array;

	i = 0;
	if (!(array = malloc((ac + 1) * sizeof(t_stock_str))))
		return (NULL);
	while (i < ac)
	{
		array[i].str = av[i];
		array[i].size = ft_strlen(av[i]);
		if(!(array[i].copy = ft_strdup(av[i])))
		{
			while (i >= 0)
				free(array[i--].copy);
			free(array);
			return (NULL);
		}
		++i;
	}
	array[i].str = 0;
	return (array);
}

char	*ft_strdup(char *str)
{
	char	*dup;
	int		i;

	i = 0;
	if (!(dup = malloc((ft_strlen(str) + 1) * sizeof(char))))
		return (NULL);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
