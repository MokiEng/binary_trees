#include "binary_trees.h"

int binary_tree_is_complete(const binary_tree_t *tree);
int btic_helper(const binary_tree_t *tree, size_t index, size_t size);
size_t binary_tree_size(const binary_tree_t *tree);

/**
 * binary_tree_is_complete - a function that checks if a
 *	binary tree is complete
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);

	return (btic_helper(tree, 0, size));
}
/**
 * btic_helper - a function that checks if a binary tree is complete.
 * @tree: a pointer to the root node of the tree to check.
 * @index: node index to check.
 * @size: number of nodes in the tree.
 *
 * Return: 1 if the tree is complete
 *         0 if the tree is not complete and NULL.
 *
 */
int btic_helper(const binary_tree_t *tree, size_t index, size_t size)
{
	if (tree == NULL)
		return (1);

	if (index >= size)
		return (0);

	return (btic_helper(tree->left, 2 * index + 1, size) &&
		btic_helper(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_size - a funcion that measures the size of a binary tree.
 * @tree: tree to measure the size .
 *
 * Return: 0 if tree is NULL
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}
