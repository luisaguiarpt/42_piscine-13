int	ft_strcmp(char *s1, char *s2);

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[i] ,tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
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
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	*tab[6] = {"test4", "test1", "test3", "all", "1to3", 0};

	printf("Before:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", tab[i]);
	}
	ft_sort_string_tab(tab);
	printf("After:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", tab[i]);
	}
}
