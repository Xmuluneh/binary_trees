#include "binary_trees.h"
/**
 * array_to_bst -It takes an array of integers
 *  and returns a pointer to the root node of a binary search tree
 * @array: A pointer to the first element of an array of integers
 * @size: the size of the array
 * Return: A pointer to the root node of the tree.
 */
bst_t *array_to_bst(int *array, size_t size)
{
unsigned int i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);

}
