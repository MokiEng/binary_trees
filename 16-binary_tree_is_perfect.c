#include "binary_trees.h"

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);/* If tree is NULL, return 0 */
	}

	/* Calculate the height of the tree */
	int height = binary_tree_height(tree);

	/* Check if the tree is perfect */

	return (is_perfect_recursive(tree, height, 0));
}
/**
* is_perfect_recursive - a function Check if we have reached the last level.
* @node: the node of binary tree.
* @height: height of the tree.
* @level: level of the tree.
* Return: NULL if tree is not perfect.
*/
int is_perfect_recursive(const binary_tree_t *node, int height, int level)
{
	/* Check if we have reached the last level */
	if (level == height - 1)
	{
		/* Check if the node is a leaf node */
		if (node->left == NULL && node->right == NULL)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}

	/* Recursively check if the left and right subtrees are perfect */
	if (node->left && node->right)
	{
		return (is_perfect_recursive(node->left, height, level + 1) &&
				is_perfect_recursive(node->right, height, level + 1));
	}

	return (0);/* One of the subtrees is missing, the tree is not perfect */
}
