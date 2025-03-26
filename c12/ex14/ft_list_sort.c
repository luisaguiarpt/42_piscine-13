// This version of the code swaps the elements themselves and not the data in them

#include "ft_list.h"

void	ft_list_swap(t_list **begin, t_list **curr, t_list **prev, int *f);

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*curr;
	t_list	*prev;
	int		flag;

	flag = 1;
	if (!begin_list || !*begin_list)
		return ;
	while (flag)
	{
		flag = 0;
		prev = (void *)0;
		curr = *begin_list;
		while (curr && curr->next)
		{
			if (cmp(curr->data, curr->next->data))
				ft_list_swap(begin_list, &curr, &prev, &flag);
			else
			{
				prev = curr;
				curr = curr->next;
			}
		}
	}
}

void	ft_list_swap(t_list **begin, t_list **curr, t_list **prev, int *f)
{
	t_list	*tmp;

	tmp = (*curr)->next;
	(*curr)->next = tmp->next;
	tmp->next = (*curr);
	if (*prev)
		(*prev)->next = tmp;
	else
		*begin = tmp;
	*curr = tmp;
	*f = 1;
}

int	bigger(int *a, int *b)
{
	return (*a > *b);
}
#include <stdio.h>

int	main(void)
{
	int	v[6] = {42, 9, 6, 3, 1, 42};

	t_list	l5 = {NULL, &v[5]};
	t_list	l4 = {&l5, &v[4]};
	t_list	l3 = {&l4, &v[3]};
	t_list	l2 = {&l3, &v[2]};
	t_list	l1 = {&l2, &v[1]};
	t_list	l0 = {&l1, &v[0]};

	t_list	*begin = &l0;	
	t_list	*begin1 = &l0;	
	t_list	**ptr= &begin1;	

	printf("before:\n");
	while (begin)
	{
		printf("%i\n", *(int *)(begin->data));
		begin = begin->next;
	}
	ft_list_sort(ptr, bigger);
	printf("after:\n");
	while (begin1)
	{
		printf("%i\n", *(int *)(begin1->data));
		begin1 = begin1->next;
	}
}
