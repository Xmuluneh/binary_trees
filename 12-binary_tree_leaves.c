#include "binary_trees.h"
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
