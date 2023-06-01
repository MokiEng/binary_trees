#include "binary_trees.h"

/**
 * array_to_avl - a function that builds an AVL tree from an array
 *
 * @array: a pointer to the first element of the array to be converted.
 * @size: the number of element in the array.
 *
 * Return: a pointer to the root node of the created AVL tree, NULL on failure.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *node = NULL;
	unsigned int j;

	for (j = 0; j < size; j++)
		avl_insert(&node, array[j]);

	return (node);
}
