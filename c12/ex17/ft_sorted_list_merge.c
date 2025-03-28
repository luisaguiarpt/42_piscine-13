#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	t_list	**curr;
	t_list	*tmp;
   
	curr = begin_list1;
	if (!*curr)
	{
		*curr = begin_list2;
		return ;
	}
	while (*curr && begin_list2)
	{
		if (cmp(begin_list2->data, (*curr)->data) > 0)
			curr = &(*curr)->next;
		else
		{
			tmp = begin_list2->next;
			begin_list2->next = *curr;
			*curr = begin_list2;
			begin_list2 = tmp;
		}
	}
	if (begin_list2)
		*curr = begin_list2;
}

#include <stdio.h>
#include <string.h>

void	p_d(t_list *head)
{
    while (head)
	{
        printf("%s -> ", (char *)head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void	p_l(t_list *head)
{
	p_d(head);
    while (head)
	{
        printf("%p -> ", head);
        head = head->next;
    }
    printf("NULL\n");
}

int	main(void)
{
	char	*strs1[3] = {"1", "4", "7"};
	char	*strs2[3] = {"2", "3", "8"};
	
	t_list	a2 = {NULL, strs1[2]};
	t_list	a1 = {&a2, strs1[1]};
	t_list	a0 = {&a1, strs1[0]};

	t_list	b2 = {NULL, strs2[2]};
	t_list	b1 = {&b2, strs2[1]};
	t_list	b0 = {&b1, strs2[0]};

	t_list	*a = &a0;
	t_list	*b = &b0;
	t_list	**head = &a;
	ft_sorted_list_merge(head, b, strcmp);
	while (*head)
	{
		printf("%s\n", (char *)(*head)->data);
		head = &(*head)->next;
	}
}
