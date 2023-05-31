#include "binary_trees.h"

/**
 * binary_tree_rotate_left - a function that performs a left-rotation
 *	on a binary tree
 *
 * @tree: a pointer to the root node of the tree to rotate.
 *
 * Return: a pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL || tree->right == NULL)
	{
		return (tree);/* No rotation needed or invalid tree */
	}

	binary_tree_t *pivot = tree->right;

	tree->right = pivot->left;
	pivot->left = tree;
	return (pivot);
}
