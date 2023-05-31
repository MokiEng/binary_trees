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
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);/* If tree is NULL, return 0 */
	}

	/* Calculate the height of the left and right subtrees recursively */

	left_height = tree->left ? (int)binary_tree_height(tree->left) : -1;
	right_height = tree->right ? (int)binary_tree_height(tree->right) : -1;

	/* Calculate and return the balance factor */
	return (left_height - right_height);
}

/**
 * binary_tree_height - a function that measures the height of
 *	a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);/* If tree is NULL, return height as 0 */
	}
	{
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		/**
		*  Return: the maximum height between the left and
		*	right subtrees, plus 1 for the current node
		*/
		return (left_height > right_height ? left_height : right_height);
	}
}
