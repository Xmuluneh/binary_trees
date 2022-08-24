/**
 *  binary_tree_delete - It deletes a binary tree.
 * @tree: pointer to the root node of the tree to delete
 * Return: the size of the binary tree.
 */
#include "binary_trees.h"



void binary_tree_delete(binary_tree_t *tree)
{
if (!tree)
	return;
binary_tree_delete(tree->right);
binary_tree_delete(tree->left);
free(tree);
}
