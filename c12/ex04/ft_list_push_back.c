#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*tmp;

	tmp = *begin_list;
	if (*begin_list == ((void*)0))
		*begin_list = ft_create_elem(data);
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_create_elem(data);
	}
}

#include <stdio.h>

int	main(void)
{
	int	v[3] = {2, 4, 6};

//	t_list	l0 = {NULL, &v[1]};
//	t_list	l1 = {&l0, &v[0]};
	t_list	*ptr = NULL;
	ft_list_push_back(&ptr, &v[2]);
	t_list *tmp = ptr; 
	while (tmp)
	{
		printf("%i\n", *(int*)(tmp->data));
		tmp = tmp->next;
	}
}
