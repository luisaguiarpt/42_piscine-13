#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*node;

	node = *begin_list1;
	while (node->next)
	{
		begin_list1 = &(*begin_list1)->next;
		node = *begin_list1;
	}
	node->next = begin_list2;
}

#include <stdio.h>

int	main(void)
{
	t_list	l1e2 = {NULL, NULL};
	t_list	l1e1 = {&l1e2, NULL};
	t_list	l1e0 = {&l1e1, NULL};

	t_list	l2e2 = {NULL, NULL};
	t_list	l2e1 = {&l2e2, NULL};
	t_list	l2e0 = {&l2e1, NULL};

	t_list	*begin1 = &l1e0;
	t_list	*begin1_1 = &l1e0;
	t_list	**ptr1 = &begin1_1;
	t_list	*begin2 = &l2e0;

	printf("before:\n");
	while (begin1)
	{
		printf("%p\n", begin1);
		begin1 = begin1->next;
	}
	ft_list_merge(ptr1, begin2);
	printf("after:\n");
	while (begin1_1)
	{
		printf("%p\n", begin1_1);
		begin1_1 = begin1_1->next;
	}

}
