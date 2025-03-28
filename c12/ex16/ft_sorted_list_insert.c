#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	**curr;
	t_list	*new;

	curr = begin_list;
	new = ft_create_elem(data);
	if (!(*begin_list))
	{
		*begin_list = new;
		return ;
	}
	while (*curr && cmp(data, (*curr)->data) > 0)
		curr = &(*curr)->next;
	new->next = *curr;
	*curr = new;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
//	char	*strs[5] = {"hella", "helle", "helli","hello", "hellu"};

/*	t_list	l4 = {NULL, strs[4]};
	t_list	l3 = {&l4, strs[3]};
	t_list	l2 = {&l3, strs[2]};
	t_list	l1 = {&l2, strs[1]};
	t_list	l0 = {&l1, strs[0]};
*/
	char	*str = "hellz";
	t_list	*ptr = NULL; 
	t_list	*ptr1 = ptr;

	printf("before:\n");
	while (ptr)
	{
		printf("%s\n", (char *)(ptr->data));
		ptr = ptr->next;
	}
	ft_sorted_list_insert(&ptr1, (void *)str, strcmp);
	printf("after:\n");
	while (ptr1)
	{
		printf("%s\n", (char *)(ptr1->data));
		ptr1 = ptr1->next;
	}
}
