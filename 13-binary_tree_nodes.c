#include "binary_trees.h"


/**
 * binary_tree_nodes - a function that counts the nodes with at least
 *	1 child in a binary tree
 *
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);/* If tree is NULL, return number of nodes as 0 */
	}

	/* If the current node has at least one child, return 1 */

	if (tree->left != NULL || tree->right != NULL)
	{
		return (1);
	}

	/* Recursively calculate no. of nodes in z left and right subtrees */

	size_t left_nodes = binary_tree_nodes(tree->left);
	size_t right_nodes = binary_tree_nodes(tree->right);

	/**
	 * Return the sum of nodes in left and right subtrees plus
	 *	1 for the current node.
	 */

	return (left_nodes + right_nodes + 1);
}
