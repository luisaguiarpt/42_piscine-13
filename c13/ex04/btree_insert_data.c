#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if (!(*root))
	{
		*root = btree_create_node(item);
		return ;
	}
	else if (cmpf(item, (*root)->item) < 0)
		btree_insert_data(&(*root)->left, item, cmpf);
	else
		btree_insert_data(&(*root)->right, item, cmpf);
}

#include <stdio.h>
#include <string.h>

void	prt_tree(t_btree *root)
{
	if (root == NULL)
		return ;
	printf("%s|", (char *)root->item);
	prt_tree(root->left);
	prt_tree(root->right);
}

int	ft_strcmp(void *s1, void *s2)
{
	char	*str1 = (char *)s1;
	char	*str2 = (char *)s2;
	int		res = strcmp(str1, str2);
	return (res);
}

int	main(void)
{
	t_btree	root = {NULL, NULL, (void *)strdup("hello")};

	t_btree	*ptr = &root;
	prt_tree(ptr);
	printf("\n");
	btree_insert_data(&ptr, "hella", ft_strcmp);
	btree_insert_data(&ptr, "hellz", ft_strcmp);
	btree_insert_data(&ptr, "hellb", ft_strcmp);
	btree_insert_data(&ptr, "helly", ft_strcmp);
	prt_tree(ptr);
	printf("\n");
}
