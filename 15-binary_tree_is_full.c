#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree);
int is_full_recursive(const binary_tree_t *tree);

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

	/* Check if the tree violates the conditions of a full binary tree */

	if ((tree->left == NULL && tree->right != NULL)
			|| (tree->left != NULL && tree->right == NULL))
	{
		return (0);/* Tree has a single child, violating the condition */
	}

	/* Recursively check if both subtrees are full */

	int left_full = binary_tree_is_full(tree->left);
	int right_full = binary_tree_is_full(tree->right);

	/* Return 1 only if both subtrees are full */
	return (left_full && right_full);
}
