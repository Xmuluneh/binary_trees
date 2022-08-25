#include "binary_trees.h"
/**
 * binary_tree_is_bst - Check the validation of the BST
 * @tree: the root of the tree to rotate
 * Return: A pointer to the new root node of the tree once rotated
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
if (!tree)
	return (0);
return (btib_helper(tree, INT_MIN, INT_MAX));
}
/**
 * btib_helper -If the tree is empty,
 *  it's a binary search tree. Otherwise,
 *  if the tree's value is less than the
 * minimum or greater than the maximum,
 *  it's not a binary search tree. Otherwise
 * it's a binary search
 * tree if the left subtree is a binary search
 * tree with maximum equal to the current value minus one,
 * and the right subtree is a binary search tree
 * with minimum equal to the current value plus one
 * @tree: the root node of the tree
 * @min: the minimum value a node can have
 * @max: the maximum value a node can have
 * Return: the result of the recursive call
 */
int btib_helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (btib_helper(tree->left, min, tree->n - 1) &&
	btib_helper(tree->right, tree->n + 1, max));
}
