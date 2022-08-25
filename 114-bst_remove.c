#include "binary_trees.h"
/**
 * bst_remove -If the value is less than
 *  the current node
 * recurse on the left subtree.
 *  If the value is greater
 * than the current node, recurse on
 *  the right subtree. If the value is equal to the current node, then
 * delete the current node
 * @root: the root of the tree
 * @value: the value to remove from the tree
 * Return: The root node of the tree.
 */
bst_t *bst_remove(bst_t *root, int value)
{
bst_t *tmp = NULL;

	if (!root)
		return (NULL);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (!root->left)
		{
			tmp = root->right;
			free(root);
			return (tmp);
		}
		else if (!root->right)
		{
			tmp = root->left;
			free(root);
			return (tmp);
		}
		tmp = bst_min_val(root->right);
		root->n = tmp->n;
		root->right = bst_remove(root->right, tmp->n);
	}
	return (root);
}
/**
 * bst_min_val -Traverse the left subtree of
 *  the root node until you reach the end of the tree.
 * @root: the root of the tree
 * Return: A pointer to the node with the minimum value in the tree.
 */
bst_t *bst_min_val(bst_t *root)
{
	bst_t *min = root;

	while (min->left)
		min = min->left;

	return (min);
}
