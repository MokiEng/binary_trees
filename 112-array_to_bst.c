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
	bst_t *root = NULL;

	for (size_t i = 0; i < size; i++)
	{
		int value = array[i];

		/* Check if the value already exists in the BST */
		bst_t *current = root;
		int found = 0;

		while (current != NULL)
		{
			if (value == current->data)
			{
				found = 1;
				break;
			}
			else if (value < current->data)
			{
				current = current->left
			}
			else
			{
				current = current->right;
			}
		}
		if (!found)
		{
			root = insert_bst_node(root, value);
		}
	}
	return (root)
}
