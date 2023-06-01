#include "binary_trees.h"

int binary_tree_is_avl(const binary_tree_t *tree);
int is_bst_helper(const binary_tree_t *node, int min_value,
		int max_value);
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_is_avl - a function that checks if a
 *	binary tree is a valid AVL Tree
 *
 * @tree: a pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid AVL Tree, and 0 otherwise,
 *  moreover If tree is NULL, return 0
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (is_bst_helper(tree->right, tree->value, INT_MAX));
}

/**
 * is_bst_helper -a recursive helper function that takes a binar
 *		tree node along with a minimum value and a maximum value.
 * @node: a binary tree node.
 * @min_value: the minimum value.
 * @max_value: the maximum value.
 *
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int is_bst_helper(const binary_tree_t *node, int min_value, int max_value)
{
	if (node == NULL)
	{
		return (1);
	}

	if (node->n <= min_value || node->n >= max_value)
	{
		return (0);
	}

	int left_subtree = node->left ? 1 + binary_tree_height(node->left) : 0;
	int right_subtree = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	if (abs(left_subtree - right_subtree) > 1)
		return (0);

	return (is_bst_helper(node->left, min_value, node->n) &&
			is_bst_helper(node->right, node->n, max_value));
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
