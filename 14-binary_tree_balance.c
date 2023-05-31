#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance
 *	factor of a binary tree
 *
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 * Return: 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);/* If tree is NULL, return 0 */
	}

	/* Calculate the height of the left and right subtrees recursively */

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	/* Calculate and return the balance factor */
	return (left_height - right_height);
}
