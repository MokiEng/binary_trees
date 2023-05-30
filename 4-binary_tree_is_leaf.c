#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 *
 * @node: A pointer to the node to check.
 *
 * Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);/* NULL node is not a leaf */
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);/* Node with no children is a leaf */
	}
	return (0);/* Node has at least one child */
}
