#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);/* If tree is NULL, return 0*/
	}

	/* Check if the tree is empty (no nodes) */

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);/* Tree with no nodes is considered full */
	}

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}
