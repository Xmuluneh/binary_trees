#include "binary_trees.h"
/**
 * binary_tree_uncle -If the node has a parent,
 * return the sibling of the parent
 * @node: is a pointer to the node to find the uncle.
 * Return: A pointer to the uncle node of the node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node || !node->parent)
	return (NULL);

return (binary_tree_sibling(node->parent));
}
/**
 * binary_tree_sibling-If the node exists
 * and has a parent
 * return the sibling of the node
 * @node: a pointer to the node to find the sibling
 * Return: The sibling of the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
	return (NULL);

if (node == node->parent->left)
	return (node->parent->right);
return (node->parent->left);
}
