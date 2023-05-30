#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree.
 *
 * @tree: a pointer to the root node of the tree to count the number of leaves.
 *
 * Return: 0 if tree is NULL and A NULL pointer is not a leaf.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);/* If tree is NULL, return number of leaves as 0 */
	}

	/* If the current node is a leaf (no left or right child), return 1 */

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/* Recursively calculate no. of leaves in the left and right subtrees */

	size_t left_leaves = binary_tree_leaves(tree->left);
	size_t right_leaves = binary_tree_leaves(tree->right);

	/* Return the sum of leaves in the left and right subtrees */

	return (left_leaves + right_leaves);
}
