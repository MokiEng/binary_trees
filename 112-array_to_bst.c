#include "binary_trees.h"

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
	bst_t *base = NULL;
	unsigned int j;

	for (j = 0; j < size; j++)
		bst_insert(&base, array[j]);

	return (base);
}
