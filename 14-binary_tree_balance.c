#include "binary_trees.h"
/**
 * binary_tree_balance-If the tree is NULL,
 * return 0. Otherwise,
 * return the height of the left subtree minus the height of
 * the right subtree
 * @tree: pointer to the root node of the tree to measure the balance factor of
 * Return: The height
 * minus the height of the right subtree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int height_left, height_right;

if (!tree)
	return (0);

height_left = tree->left ? (int)binary_tree_height(tree->left) : -1;
height_right = tree->right ? (int)binary_tree_height(tree->right) : -1;

return (height_left - height_right);
}

/**
 * binary_tree_height-If the tree is NULL,
 *  return 0, otherwise return the height
 * of the left subtree if it's greater than
 * the height of the right subtree
 * otherwise return the height of the right subtree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: The height of the binary tree.
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
