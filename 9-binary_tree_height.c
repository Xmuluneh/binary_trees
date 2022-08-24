#include "binary_trees.h"


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
