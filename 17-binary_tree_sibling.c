#include "binary_trees.h"

/**
 * binary_tree_sibling -  a function that finds the sibling of a node
 *
 * @node: A pointer to the node to find the sibling.
 *
 * Return: NULL if node is NULL or
 *	parent is NULL or node has no sibiling.
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);/* If node or parent is NULL, return NULL */
	}

	binary_tree_t *parent = node->parent;

	if (parent->left == node)
	{
		return (parent->right);
	}
	else if (parent->right == node)
	{
		return (parent->left);
	}
	else
	{
		return (NULL);
	}
}
