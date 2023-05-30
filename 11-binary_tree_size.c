#include "binary_trees.h"


/**
 * binary_tree_size - a function that measures the size of a binary tree
 *
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);/* If tree is NULL, return size as 0 */
	}

	/**
	 * Recursively calculate the size by adding the size of the
	 *	left and right subtrees, plus 1 for the current node
	 */

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
