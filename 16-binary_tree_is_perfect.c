#include "binary_trees.h"
/**
 * binary_tree_is_perfect -If the tree is NULL,
 *  return 0, otherwise return the
 * size of the left subtree plus the size of the
 * right subtree plus 1
 * @tree: pointer to the root node of the tree to measure the height.
 * Return:The height of the binary tree.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t height = 0;
size_t nodes = 0;
size_t power = 0;

if (!tree)
	return (0);

if (!tree->right && !tree->left)
	return (1);

height = binary_tree_height(tree);
nodes = binary_tree_size(tree);
power = (size_t)_pow_recursion(2, height + 1);
return (power - 1 == nodes);
}
/**
 * _pow_recursion- If y is less than 0,
 *  return -1. If y is 0
 * return 1. Otherwise
 * return x times the function called
 * with x and y minus 1
 * @x: base
 * @y: the power to raise x to
 * Return: the value of x to the power of y.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
if (y == 0)
	return (1);
else
	return (x * _pow_recursion(x, y - 1));

}
/**
 * binary_tree_size- If the tree is NULL,
 * return 0, otherwise return the size of the
 * left subtree plus the size of the
 * right subtree plus 1
 * @tree: pointer to the root node of the tree to measure the size
 * Return: The size of the binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (!tree)
	return (0);

return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
/**
 * binary_tree_height -If the tree is NULL
 * return 0
 * otherwise return the height of the left subtree if it's greater than
 * the height of the right subtree, otherwise return
 *  the height of the right subtree
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
