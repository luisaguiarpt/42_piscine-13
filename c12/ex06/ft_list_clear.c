#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*tmp;

	while (begin_list)
	{
		tmp = begin_list->next;
		if (begin_list->data)
			(*free_fct)(begin_list->data);
		free(begin_list);
		begin_list = tmp;
	}
}

void	ft_free_list(void *addr)
{
	free(addr);
}

#include <stdio.h>
#include <string.h>

t_list *ft_list_push_strs(int size, char **strs);

int	main(void)
{
	char **strs;
	strs = malloc(3 * sizeof(char *));

	strs[0] = strdup("hell");
	strs[1] = strdup("pwea");
	strs[2] = strdup("fwee");

	t_list *ptr = ft_list_push_strs(3, strs);
	t_list *ptr1 = ptr;

	while (ptr1)
	{
		printf("%s\n", (char *)(ptr1->data));
		ptr1 = ptr1->next;
	}
	ft_list_clear(ptr, ft_free_list);
	free(strs);
}
