void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int		i;
	int		flag;
	char	*tmp;

	flag = 1;
	while (flag)
	{
		i = 0;
		flag = 0;
		while (tab[i + 1])
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab [i + 1];
				tab[i + 1] = tmp;
				flag = 1;
			}
			i++;
		}
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
		if (*s1 != *s2)
			return (*s2 - *s1);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	*tab[6] = {"zendaya", "bill", "kill", "123", "order", 0};
	int		i = 0;
	
	printf("Before:\n");
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	ft_advanced_sort_string_tab(tab, ft_strcmp);
	i = 0;
	printf("After:\n");
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
