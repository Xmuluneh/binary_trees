#include "binary_trees.h"
/**
 *binary_tree_is_complete - It checks if a binary tree is complete.
 * @tree:pointer to the root node of the tree to check
 * Return: 1 if the tree is complete else 
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);

	return (btic_helper(tree, 0, size));
}
/**
 * btic_helper-If the index is greater
 *  than or equal to the size of the array, return 0. Otherwise, return the
 * result of calling the function recursively on the left and right subtrees
 * @tree: The root node of the tree
 * @index: the index of the current node in the tree.
 * @size: the size of the array
 * Return: 1 if the tree is complete, 0 if it is not.
 */
int btic_helper(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (btic_helper(tree->left, 2 * index + 1, size) &&
		btic_helper(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_size -If the tree is NULL
 * return 0, otherwise return the size of the
 * left subtree plus the size of the
 * right subtree plus 1
 * @tree: pointer to the root node of the tree to measure the size
 * Return:The size of the binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}
