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
	if (parent == NULL)
	{
		return (NULL); /* Cannot insert right child if parent is NULL */
	}
	/* Create the new node */
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		return (NULL); /* Unable to create a new node */
	}
	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
		/*Set the parent of the current right child to the new node */
		new_node->right = parent->right;
		/* Set the current right child as the right child of the new node */
	}
	parent->right = new_node;
	/* Set the new node as the right child of the parent */
	return (new_node);
}
