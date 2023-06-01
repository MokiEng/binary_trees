#include "binary_trees.h"

/**
 * array_to_heap - a function that builds a Max Binary Heap tree from an array
 *
 * @array: a pointer to the first element of the array to be converted.
 * @size: the number of element in the array.
 *
 * Return: a pointer to the root node of the created one, NULL on failure.
 */
heap_t *array_to_heap(int *array, size_t size)
{

	heap_t *node = NULL;
	unsigned int j;

	for (j = 0; j < size; j++)
		heap_insert(&node, array[j]);

	return (node);
}
