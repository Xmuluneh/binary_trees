#include "binary_trees.h"
/**
 * binary_tree_nodes-If the tree is NULL
 * or if the tree is a leaf
 * return 0. Otherwise, return the size of the tree minus
 * the number of leaves
 * @tree: pointer to the root node of the tree to count the number of nodes in
 * Return: The number of nodes with at least 1 child in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (!tree || (!tree->left && !tree->right))
	return (0);

return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size- If the tree is NULL,
 * return 0, otherwise return the size of the left subtree plus the size of the
 * right subtree plus 1
 * @tree:pointer to the root node of the tree to measure the size
 * Return: The size of the binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_leaves -If the tree is NULL, return 0.
 * If the tree is a leaf, return 1. Otherwise, return the sum of the
 * leaves in the left and right subtrees
 * @tree: pointer to the root node of the tree to count the number of leaves in
 * Return: The number of leaves in a binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
