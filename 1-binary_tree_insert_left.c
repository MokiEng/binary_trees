#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function which inserts
 * a node as the left-child of another node.
 * @parent: A pointer to the node to insert the left child in.
 * @value: The value to store the new node.
 *
 * Return: A pointer to the created node, NULL on failure, or parent is null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL); /* Cannot insert left child if parent is NULL */
	}
	/* Create the new node */
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		return (NULL); /* Unable to create a new node */
	}
	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
		/* Set the parent of the current left child to the new node */
		new_node->left = parent->left;
		/* Set the current left child as the left child of the new node */
	}
	parent->left = new_node;
	/* Set the new node as the left child of the parent */
	return (new_node);
}
