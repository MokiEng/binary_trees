#include "binary_trees.h"

int binary_tree_is_bst(const binary_tree_t *tree);
int is_bst_helper(const binary_tree_t *node, int min_val, int max_val);

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
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
/**
 * is_bst_helper -a recursive helper function that takes a binar
 *		tree node along with a minimum value and a maximum value.
 * @node: a binary tree node.
 * @min_val: the minimum value.
 * @max_val: the maximum value.
 *
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int is_bst_helper(const binary_tree_t *node, int min_val, int max_val)
{
	if (node == NULL)
		return (1);
	if (node->n <= min_val || node->n >= max_val)
		return (0);
	return (is_bst_helper(node->left, min_val, node->n) &&
			is_bst_helper(node->right, node->n, max_val));
}
