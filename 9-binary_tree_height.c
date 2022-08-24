#include "binary_trees.h"
/**
 * binary_tree_height- If the tree is NULL, return 0. Otherwise,
 * return the height of the left subtree if it's greater than
 * the height of the right subtree, otherwise
 *  return the height of the right subtree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return:The height of the tree.
 */



size_t binary_tree_height(const binary_tree_t *tree)
{
size_t height_left = 0;
size_t height_right = 0;

if (!tree)
	return (0);

height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return (height_left > height_right ? height_left : height_right);
}
