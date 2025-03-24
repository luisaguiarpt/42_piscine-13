#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*front;

	front = ft_create_elem(data);
	front->next = *begin_list;
	*begin_list = front;
}

#include <stdio.h>

int	main(void)
{
	int	i = 10;
	int	j = 12;

	t_list *init = ft_create_elem((void*)&i);
	printf("Init\nAddr: %p\nData: %i (addr: %p)\n", init, *(int*)(init->data), init->data);
	ft_list_push_front(&init, (void*)&j);
	printf("New init\nAddr: %p\nData: %i (addr: %p)\n", init, *(int*)(init->data), init->data);
	printf("Old init\nAddr: %p\nData: %i (addr: %p)\n", init->next, *(int*)(init->next->data), init->next->data);
}
