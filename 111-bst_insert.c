#include "binary_trees.h"

/**
 * bst_insert -If the tree is empty,
 * create a new node and return it.
 * Otherwise, find the correct place to insert
 * the new node and return it
 * @tree: a pointer to the root node of the BST to insert the value in
 * @value: the value to insert into the tree
 * Return: A pointer to the newly created node.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
bst_t *tmp = NULL;
bst_t *second = NULL;
bst_t *new = NULL;

	if (!tree)
		return (NULL);
	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));

	tmp = *tree;
	while (tmp)
	{
		second = tmp;
		if (value < tmp->n)
			tmp = tmp->left;
		else if (value > tmp->n)
			tmp = tmp->right;
		else if (value == tmp->n)
			return (NULL);
	}

	new = binary_tree_node(NULL, value);
	if (second == NULL)
		second = new;
	else if (value < second->n)
	{
		second->left = new;
		new->parent = second;
	}
	else
	{
		second->right = new;
		new->parent = second;
	}

	return (new);
}
