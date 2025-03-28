#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*current;

	i = 0;
	current = begin_list;
	if (begin_list == (void *)0)
		return ((void *)0);
	while (i < nbr)
	{
		current = current->next;
		i++;
	}
	return (current);
}

#include <stdio.h>

int	main(void)
{
	int	v[4] = {1, 3, 2, 4};

	t_list	l3 = {NULL, &v[3]};
	t_list	l2 = {&l3, &v[2]};
	t_list	l1 = {&l2, &v[1]};
	t_list	l0 = {&l1, &v[0]};

	t_list	*ptr = NULL;
	ptr = ft_list_at(ptr, 3);
	printf("%i\n", *(int *)(ptr->data));
}
