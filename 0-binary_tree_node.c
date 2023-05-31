#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - a  function that creates a binary tree node.
 *
 * @parent: a pointer to the parent node.
 * @value: The value to be puted on the new node.
 *
 * Return: If it fails - NULL else - a pointer to the new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL); /* Unable to allocate memory for the new node*/
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
