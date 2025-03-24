#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*new_elem;

	if (!(new_elem = malloc(sizeof(t_list))))
		return (NULL);
	new_elem->next = NULL;
	new_elem->data = data;
	return (new_elem);
}

#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	int		n = 10;

	int		*dta = &n;
	lst = ft_create_elem((void*)dta);
	printf("Next: %p\n", lst->next);
	printf("Data: %p\n", lst->data);
}
