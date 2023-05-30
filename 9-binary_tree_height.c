#include "binary_trees.h"

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
	if (tree == NULL)
	{
		return (0);/* If tree is NULL, return height as 0 */
	}

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	/**
	 *  Return: the maximum height between the left and
	 *	right subtrees, plus 1 for the current node
	 */
	return (

			(left_height > right_height) ? (left_height + 1) : (right_height + 1));
}
