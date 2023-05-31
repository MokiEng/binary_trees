#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of a node
 *
 * @node: A pointer to the node to find the uncle.
 *
 * Return: NULL if node is NULL
 *	or node has no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *parent = node->parent;
	binary_tree_t *grandparent = parent->parent;

	if (grandparent->left == parent)
	{
		return (grandparent->right);
	}
	else if (grandparent->right == parent)
	{
		return (grandparent->left);
	}
	else
	{
		return (NULL);/* Return NULL if node has no uncle */
	}
}
