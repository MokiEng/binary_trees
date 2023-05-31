#include "binary_trees.h"

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
void btlo_helper(const binary_tree_t *tree, void (*func)(int), size_t level);
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_levelorder -  a function that goes through a binary tree
 *  using level-order traversal.
 *
 * @tree: a pointer to the root node of the tree to traverse.
 * @func: a pointer to a function to call for each node and
 *  if tree or func is NULL, do nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level, max_level;

	if (tree == NULL || func == NULL)
		return;

	max_level = binary_tree_height(tree) + 1;

	for (level = 1; level <= max_level; level++)
		btlo_helper(tree, func, level);
}

/**
 * btlo_helper - a function thst goes through a binary tree
 *	using post-order traverse
 * @tree: tree to traverse
 * @func: pointer to a function to call for each node
 * @level: the level of the tree to call func upon
 */
void btlo_helper(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (level == 1)
		func(tree->n);
	else
	{
		btlo_helper(tree->left, func, level - 1);
		btlo_helper(tree->right, func, level - 1);
	}
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
