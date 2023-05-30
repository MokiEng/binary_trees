#include "binary_trees.h"

/**
 * binary_tree_insert_right - a functionthat inserts a
 * node as the right-child of a node.
 *
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: a pointer to the created node, or
 *		NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL); /* Cannot insert right child if parent is NULL */
	}
	/* Create the new node */
	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL); /* Unable to create a new node */

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = parent->right;
	parent->right = new_node;
	if (new_node->right)
		new_node->right->parent = new_node;
	return (new_node);
}
