#include "binary_trees.h"

/**
 * binary_tree_delete - A function deletes an entire binary tree.
 *
 * @tree: A pointer to the root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return; /* If tree is NULL, do nothing */
	}

	/* Recursively delete the left and right subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/*Free the memory allocated for the current node */
	free(tree);
}
