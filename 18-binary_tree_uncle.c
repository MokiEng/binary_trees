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
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

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

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
