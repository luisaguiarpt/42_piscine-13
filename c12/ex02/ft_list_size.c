#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		ct;

	ct = 1;
	if (!begin_list)
		return (0);
	while (begin_list->next)
	{
		ct++;
		begin_list->next = begin_list->next->next;
	}
	return (ct);
}

#include <stdio.h>

int	main(void)
{
//	int	v[5] = {2, 4, 6, 1, 5};
//	t_list	lst4 = {NULL, &v[0]};
//	t_list	lst3 = {&lst4, &v[1]};
//	t_list	lst2 = {&lst3, &v[2]};
//	t_list	lst1 = {&lst2, &v[3]};
//	t_list	lst0 = {&lst1, &v[4]};
	t_list	*ptr = NULL;
	int	i = ft_list_size(ptr);
	printf("%i\n", i);
}
