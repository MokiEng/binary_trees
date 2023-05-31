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
	binary_tree_t *tmp, *pivot;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL);/* No rotation needed or invalid tree */
	}

	tmp = tree;
	pivot = tree->parent;
	tree = tree->right;
	tree->parent = NULL;
	if (tree->left)
	{
		tmp->right = tree->left;
		tree->left->parent = tmp;
	}
	else
		tmp->right = NULL;
	tmp->parent = tree;
	tree->left = tmp;
	if (pivot)
		pivot->right = tree;
	tree->parent = pivot;
	return (tree);
}
