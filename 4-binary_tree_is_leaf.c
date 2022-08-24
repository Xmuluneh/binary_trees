# include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if the node is leaf or not
 * @node: is a pointer to the node to check
 * Return:1 either the node is leaf node or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
