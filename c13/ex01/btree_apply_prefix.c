#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root == (void *)0)
		return ;
	applyf(root->item);
	btree_apply_prefix(root->left, applyf);
	btree_apply_prefix(root->right, applyf);
}

void	mult_2(void *n)
{
	int	*a;

	a = (int *)n;
	*a = 2 * *a;
}

#include <stdio.h>

void	btree_print(t_btree *root)
{
	if (root == (void *)0)
		return ;
	printf("%i\n", *(int *)root->item);
	btree_print(root->left);
	btree_print(root->right);
}
int	main(void)
{
	int	v[7] = {1, 2, 3, 4, 5, 6, 7};

	t_btree	f = {NULL, NULL, &v[6]};
	t_btree	e = {NULL, NULL, &v[5]};
	t_btree	d = {NULL, NULL, &v[4]};
	t_btree	c = {NULL, NULL, &v[3]};
	t_btree	b = {&e, &f, &v[2]};
	t_btree	a = {&c, &d, &v[1]};
	t_btree	root = {&a, &b, &v[0]};

	btree_apply_prefix(&root, mult_2);
	btree_print(&root);	
}
