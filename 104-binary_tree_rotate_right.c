#include "binary_trees.h"

/**
 * binary_tree_rotate_right - a function that performs a right-rotation
 *  on a binary tree
 *
 * @tree: a pointer to the root node of the tree to rotate.
 *
 * Return: a pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp, *pivot;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);/* No rotation needed or invalid tree */
	}

	tmp = tree;
	pivot = tree->parent;
	tree = tree->left;
	tree->parent = NULL;
	if (tree->right)
	{
		tmp->left = tree->right;
		tree->right->parent = tmp;
	}
	else
		tmp->left = NULL;
	tmp->parent = tree;
	tree->right = tmp;
	if (pivot != NULL)
		pivot->left = tree;
	tree->parent = pivot;
	return (tree);
}
