#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of
 *	a node in a binary tree
 *
 * @tree: a pointer to the node to measure the depth.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dep = 0;

	if (tree == NULL)
	{
		return (0);/* If tree is NULL, return depth as 0 */
	}

	/* Recursively calculate the depth by traversing to parent node */

	while (tree->parent)
	{
		dep++;
		tree = tree->parent;
	}

	/* Return the depth of the parent node plus 1 for the current node */
	return (dep);
}
