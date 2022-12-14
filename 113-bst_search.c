#include "binary_trees.h"
/**
 * bst_search - Search a value in BSt
 * @tree: pointer to the root node of the BST to search
 * @value: the value to search for
 * Return: A pointer to the node containing a value equal to value.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
bst_t *node = (bst_t *)tree;

	if (!tree)
		return (NULL);

	while (node)
	{
		if (value == node->n)
			return (node);
		if (value < node->n)
			node = node->left;
		else if (value > node->n)
			node = node->right;
	}

	return (NULL);
}
