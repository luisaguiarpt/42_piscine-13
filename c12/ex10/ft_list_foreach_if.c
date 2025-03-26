#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
	while (begin_list)
	{
		if (((*cmp)(begin_list->data, data_ref)))
		{
			(*f)(begin_list->data);
		}
		begin_list = begin_list->next;
	}
}

void	zero(void *data)
{
	int	*ptr;

	ptr = (int *)data;
	*ptr = 0;
}

int	bigger(void *a, void *b)
{
	return (*(int *)a > *(int *)b);
}

#include <stdio.h>

int	main(void)
{
	int	v[4] = {1, 2, 3, 4};

	t_list	l3 = {NULL, &v[3]};
	t_list	l2 = {&l3, &v[2]};
	t_list	l1 = {&l2, &v[1]};
	t_list	l0 = {&l1, &v[0]};

	int	a = 2;
	int	*ref = &a;
	
	t_list	*test = &l0;
	t_list	*begin = &l0;

	while (test)
	{
		printf("%i\n", *(int *)(test->data));
		test = test->next;
	}
	ft_list_foreach_if(begin, zero, (void *)ref, bigger);
	while (begin)
	{
		printf("%i\n", *(int *)(begin->data));
		begin = begin->next;
	}
}
