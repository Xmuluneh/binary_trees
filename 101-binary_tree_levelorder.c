#include "binary_trees.h"
/**
 * binary_tree_levelorder -Traverse the tree in level order,
 *  calling func on each node."
 * The function starts by checking if the tree or func are NULL.
 *  If so, it returns
 * @tree: pointer to the root node of the tree to traverse
 * @func: a pointer to a function
 * Return: Void.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
size_t level, maxlevel;

	if (!tree || !func)
		return;

	maxlevel = binary_tree_height(tree) + 1;

	for (level = 1; level <= maxlevel; level++)
		mul_helper(tree, func, level);
}

/**
 * mul_helper -It recursively calls itself on the left and right
 *  subtrees, and when it reaches the bottom of the
 * tree, it calls the function on the node's value
 * @tree: the root node of the tree
 * @func: the function to be called
 * @level: the current level of the tree
 * Return: void
 */
void mul_helper(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (level == 1)
		func(tree->n);
	else
	{
		mul_helper(tree->left, func, level - 1);
		mul_helper(tree->right, func, level - 1);
	}
}
/**
 * binary_tree_height - If the tree is NULL,
 *  return 0, otherwise return the height of
 *  the left subtree if it's greater than
 * the height of the right subtree
 * otherwise return the height of the right subtree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
