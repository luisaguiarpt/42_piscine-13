#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	**current;
	t_list	*tmp;

	current = begin_list;
	if (data_ref == (void *)0)
		return ;
	while (*current)
	{
		if (!cmp((*current)->data, data_ref))
		{
			tmp = *current;
			*current = (*current)->next;
			free_fct(tmp->data);
			free(tmp);
		}
		else
			current = &(*current)->next;
	}
}

void	free_list(void *addr)
{
	if (!addr)
		return ;
	free(addr);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str = "hell";

	t_list	*list = malloc(sizeof(t_list));
	list->data = strdup("hella");
	list->next = malloc(sizeof(t_list));
	list->next->data = strdup("helle");
	list->next->next = malloc(sizeof(t_list));
	list->next->next->data = strdup("helli");
	list->next->next->next = malloc(sizeof(t_list));
	list->next->next->next->data = strdup("hello");
	list->next->next->next->next = malloc(sizeof(t_list));
	list->next->next->next->next->data = strdup("hellu");
	t_list	**test = &list;
	t_list	**begin = &list;
	
	while (*test)
	{
		printf("%s\n", (char *)((*test)->data));
		test = &(*test)->next;
	}
	printf("Remove data equal to %s:\n", str);
	ft_list_remove_if(begin, (void *)str, strcmp, free_list);
	while (*begin)
	{
		printf("%s\n", (char *)((*begin)->data));
		begin = &(*begin)->next;
	}
}
