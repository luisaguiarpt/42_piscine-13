#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	if (!(node = malloc(sizeof(t_btree))))
		return (NULL);
	node->item = item;
	node->right = NULL;
	node->left = NULL;
	return (node);
}

#include <stdio.h>

int	main(void)
{
	t_btree	*t0;
	int	b = 42;
	int	*a = &b;

	t0 = btree_create_node((void *)a);
	printf("item: %i (r: %p; l: %p)\n", *(int *)t0->item, t0->right, t0->left);
	free (t0);
}
