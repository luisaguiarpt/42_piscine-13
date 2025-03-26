#include "ft_list.h"

t_list	*get_elem(t_list *head, int number);
int	list_size(t_list *head);

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		i;
	int		size;
	t_list	*tail;
	t_list	*head;
	void	*tmp;
	
	i = 0;
	size = list_size(begin_list);
	head = begin_list;
	while (i < size / 2)
	{
		tail = get_elem(begin_list, size - 1 - i);
		tmp = head->data;
		head->data = tail->data;
		tail->data = tmp;
		head = head->next;
		i++;
	}
}

t_list	*get_elem(t_list *head, int number)
{
	while (number--)
		head = head->next;
	return (head);
}

int	list_size(t_list *head)
{
	int	size;

	size = 0;
	while (head)
	{
		size++;
		head = head->next;
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
	printf("before:\n");
	while (ptr)
	{
		printf("%i\n", *(int *)(ptr->data));
		ptr = ptr->next;
	}
	ft_list_reverse_fun(ptr1);
	printf("after:\n");
	while (ptr1)
	{
		printf("%i\n", *(int *)(ptr1->data));
		ptr1 = ptr1->next;
	}
}
