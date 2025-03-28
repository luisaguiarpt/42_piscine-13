#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*new_elem;
	t_list	*curr;
	t_list	*prev;

	new_elem = ft_create_elem(data);
	curr = *begin_list;
	while (curr)
	{
		if (!curr->next)
		{
			curr->next = new_elem;
			break ;
		}
		else if (cmp(data, curr->data) > 0)
		{
			prev = curr;
			curr = curr->next;
		}
		else
		{
			if (!prev)
				*begin_list = new_elem;	
			else
				prev->next = new_elem;
			new_elem->next = curr;
			break ;
		}
	}
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*strs[5] = {"hella", "helle", "helli","hello", "hellu"};

	t_list	l4 = {NULL, strs[4]};
	t_list	l3 = {&l4, strs[3]};
	t_list	l2 = {&l3, strs[2]};
	t_list	l1 = {&l2, strs[1]};
	t_list	l0 = {&l1, strs[0]};

	char	*str = "hell";
	t_list	*ptr = &l0;
	t_list	*ptr1 = &l0;

	printf("before:\n");
	while (ptr)
	{
		printf("%s\n", (char *)(ptr->data));
		ptr = ptr->next;
	}
	ft_sorted_list_insert(&ptr1, (void *)str, strcmp);
	printf("before:\n");
	while (ptr1)
	{
		printf("%s\n", (char *)(ptr1->data));
		ptr1 = ptr1->next;
	}
}
