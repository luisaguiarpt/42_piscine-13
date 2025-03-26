#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int n);
int	ft_list_size(t_list *begin_list);

void	ft_list_reverse(t_list **begin_list)
{
	t_list			*previous;
	t_list			*current;
	t_list			*new_start;
	unsigned int	size;
	unsigned int	i;

	i = 0;
	size = ft_list_size(*begin_list);
	new_start = ft_list_at(*begin_list, size - 1);
	while (i < size - 1)
	{
		current = ft_list_at(*begin_list, size - 1 - i);
		previous = ft_list_at(*begin_list, size - 2 - i);
		current->next = previous;
		i++;
	}
	previous->next = (void *)0;
	*begin_list = new_start;
}

t_list	*ft_list_at(t_list *begin_list, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (begin_list);
}

int	ft_list_size(t_list *begin_list)
{
	int	size;

	size = 0;
	while (begin_list)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
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

	t_list *ptr = &l0;
	t_list *ptr1 = &l0;
	t_list **begin = &ptr1;

	int	i = 0;
	while (i < 5)
	{
		printf("%i: %p\n", *(int *)(ptr->data), ptr);
		ptr = ptr->next;
		i++;
	}
	ft_list_reverse(begin);
	ptr = *begin;
	printf("Reversed list:\n");
	i = 0;
	while (i < 5)
	{
		printf("%i: %p\n", *(int *)(ptr->data), ptr);
		ptr = ptr->next;
		i++;
	}
}
