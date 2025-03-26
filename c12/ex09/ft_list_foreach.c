#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

void	mult(void *data)
{
	*(int *)data = *(int *)data * 2;
}

#include <stdio.h>

int	main(void)
{
	int	v[5] = {0, 1, 2};

	t_list	l2 = {NULL, &v[0]};
	t_list	l1 = {&l2, &v[1]};
	t_list	l0 = {&l1, &v[2]};

	t_list	*begin = &l0;
	t_list	*test = &l0;

	while (test)
	{
		printf("%i\n", *(int*)(test->data));
		test = test->next;
	}
	ft_list_foreach(begin, mult);
	while (begin)
	{
		printf("%i\n", *(int*)(begin->data));
		begin = begin->next;
	}
}
