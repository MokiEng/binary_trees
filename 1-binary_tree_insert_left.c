#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function which inserts
 *	a node as the left-child of another node.
 * @parent: A pointer to the node to insert the left child in.
 * @value: The value to store the new node.
 *
 * Return: A pointer to the created node, NULL on failure, or parent is null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL); /* Cannot insert left child if parent is NULL */
	}
	/* Create the new node */
	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)

		return (NULL); /* Unable to create a new node */

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = parent->left;
	parent->left = new_node;

	if (new_node->left)
		new_node->left->parent = new_node;
	return (new_node);
}
