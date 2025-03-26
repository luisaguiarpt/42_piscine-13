#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (data_ref == (void *)0)
		return ((void *)0);
	while (begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref))
			return (begin_list->data);
		begin_list = begin_list->next;
	}
	return ((void *)0);
}

int	bigger(void *a, void *b)
{
	return (*(int *)a > *(int *)b);
}

#include <stdio.h>

int	main(void)
{
	int	v[5] = {1, 2, 3, 4, 5};

	t_list	l4 = {NULL, &v[4]};
	t_list	l3 = {&l4, &v[3]};
	t_list	l2 = {&l3, &v[2]};
	t_list	l1 = {&l2, &v[1]};
	t_list	l0 = {&l1, &v[0]};

	int	a = 2;
	int	*ptr = &a;

	t_list	*test = &l0;
	t_list	*begin = &l0;

	while (test)
	{
		printf("%i (%p)\n", *(int *)(test->data), test->data);
		test = test->next;
	}
	printf("1st element bigger than %i\n", a);
	printf("%p\n", ft_list_find(begin, (void *)ptr, bigger));
}
