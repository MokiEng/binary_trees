#include "binary_trees.h"

/**
 * binary_trees_ancestor - a function that finds the lowest
 *		common ancestor of two nodes
 *
 * @first: a pointer to the first node.
 * @second: a pointer to the second node.
 *
 * Return: a pointer to the lowest common ancestor node of the two given nodes.
 *	NULL if no common ancestor was found.
 *
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t dep_first, dep_second;

	if (first == NULL || second == NULL)
		return (NULL);

	dep_first = binary_tree_depth(first);
	dep_second = binary_tree_depth(second);

	while (dep_first > dep_second)
	{
		first = first->parent;
		dep_first--;
	}
	while (dep_second > dep_first)
	{
		second = second->parent;
		dep_second--;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}
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
