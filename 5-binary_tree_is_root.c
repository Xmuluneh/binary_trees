# include "binary_trees.h"
/**
 * binary_tree_is_root -check  the node is root node
 * @node: is a pointer to the node to check
 * Return: 1 if the node is root node otherwise 0
 */

	int binary_tree_is_root(const binary_tree_t *node)
	{
		return ((!node || node->parent) ? 0 : 1);
	}
