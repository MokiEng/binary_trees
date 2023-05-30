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

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
