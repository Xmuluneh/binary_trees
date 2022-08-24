#include "binary_trees.h"

/**
 * binary_tree_is_full-If the tree is empty,
 *  return 0. If the tree has no children,
 * return 1. If the tree has children,
 * return the result of calling
 * the function on the left and right children
 * @tree:pointer to the root node of the tree to check
 * Return: If the tree is full
 * return 1, otherwise return 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
	return (0);

if (!tree->right && !tree->left)
	return (1);

if (tree->right && tree->left)
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

return (0);
}
