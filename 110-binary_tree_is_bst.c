#include "binary_trees.h"
/**
 * binary_tree_is_bst - a function that checks if a binary tree is
 *  a valid Binary Search Tree.
 * @tree: a pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid BST, 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_util(tree, INT_MIN, INT_MAX));
}
/**
 * is_bst_util -function is a recursive helper function that takes a binar
 *		tree node along with a minimum value and a maximum value.
 * @node: a binary tree node.
 * @min_val: the minimum value.
 * @max_val: the maximum value.
 *
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
bool is_bst_util(const binary_tree_t *tree, int min_val, int max_val)
{
	if (tree == NULL)
		return (true);
	if (tree->n <= min_val || tree->n >= max_val)
		return (false);
	return (is_bst_util(tree->left, min_val, tree->n - 1) &&
			is_bst_util(tree->right, tree->n + 1, max_val));
}
