#include "binary_trees.h"

bst_t *array_to_bst(int *array, size_t size);
bst_t *insert_bst_node(bst_t *root, int value);

/**
 * array_to_bst - a function that builds a Binary Search Tree from an array
 *
 * @array: a pointer to the first element of the array to be converted.
 * @size: the number of element in the array
 *
 * Return: a pointer to the root node of the created BST, or NULL on failure.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	unsigned int j;

	for (j = 0; j < size; j++)
		bst_insert(&root, array[j]);

	return (root);
}
