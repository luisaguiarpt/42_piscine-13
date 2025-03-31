#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root == (void *)0)
		return ;
	btree_apply_infix(root->left, applyf);
	applyf(root->item);
	btree_apply_infix(root->right, applyf);
}

void	mult_2(void *data)
{
	int	*a;

	a = (int *)data;
	*a *= 2;
}

#include <stdio.h>

void	print_tree_infix(t_btree *root)
{
	if (root == NULL)
		return ;
	print_tree_infix(root->left);
	printf("%i ", *(int *)root->item);
	print_tree_infix(root->right);
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

	print_tree_infix(&root);
	printf("\n");
	btree_apply_infix(&root, mult_2);
	print_tree_infix(&root);
	printf("\n");
}

