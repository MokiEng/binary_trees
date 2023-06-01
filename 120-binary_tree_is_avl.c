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

	int left_height = get_height(tree->left);
	int right_height = get_height(tree->right);

	if (abs(left_height - right_height) > 1)
	{
		return (0);
	}

	if (!binary_tree_is_avl(tree->left) || !binary_tree_is_avl(tree->right)
			|| !is_bst_helper(tree->left, INT_MIN, tree->value) ||
			!is_bst_helper(tree->right, tree->value, INT_MAX))
	{
		return (0);
	}

	return (1);
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

	int left_subtree = is_bst_helper(node->left, min_value, node->n);
	int right_subtree = is_bst_helper(node->right, node->n, max_value);

	return (left_subtree && right_subtree);
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
