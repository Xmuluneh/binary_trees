#include "binary_trees.h"
/**
 * binary_tree_node - create a new binary tree node, and return a pointer to it
 * @parent : pointer to the parent node of the node to create
 * @value : the value to put in the new node
 * Return: A pointer to a binary tree node NULL on failed
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
