#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
	t_list *tmp;

	tmp = begin_list;
	while (tmp->next)
	{
		tmp->next = tmp->next->next;
	}
	return (tmp);

}

#include <stdio.h>

int	main(void)
{
	int		v[4] = {1, 2, 3, 4};
	t_list	l3 = {NULL, &v[0]};
	t_list	l2 = {&l3, &v[1]};
	t_list	l1 = {&l2, &v[2]};
	t_list	l0 = {&l1, &v[3]};

	t_list	*last = ft_list_last(&l0);
	printf("%i\n", *(int *)(last->data));
}
