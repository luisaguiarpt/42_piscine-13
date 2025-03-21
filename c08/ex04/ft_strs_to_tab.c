#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_struct_str	array;

	i = 0;
	if (!(array = malloc((ac + 1) * sizeof(t_struct_str))))
		return (NULL);
	while (i < ac)
	{
		array[i]->size = ft_strlen(av[i]);
		array[i]->str = &av[i];
		if(!(array[i]->copy = ft_strdup(str)))
		{
			while (i >= 0)
				free(array[i--]);
			free(array);
			return (NULL);
		}
		++i;
	}
	array[i]->str = 0;
}

char	*ft_strdup(char *str)
{
	char	*dup;
	int		i;

	if (!(dup = malloc((ft_strlen(str) + 1) * sizeof(char))))
		return (NULL);
	while (str[i])
		dup[i++] = str[i];
	dup[i] = '\0';
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
