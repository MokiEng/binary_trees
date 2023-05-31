#include "binary_trees.h"

/**
 * binary_tree_levelorder -  a function that goes through a binary tree
 *  using level-order traversal.
 *
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node and
 *  if tree or func is NULL, do nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
  size_t level, maximum_level;

	if (tree == NULL || func == NULL)
		return;

	maximum_level = binary_tree_height(tree) + 1;

	for (level = 1; level <= maximum_level; level++)
		btlo_helper(tree, func, level);
}

/**
 * btlo_helper - a function thst goes through a binary tree using post-order traverse
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
