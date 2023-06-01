#include "binary_trees.h"

/**
 * bst_insert - a function that builds a Binary Search Tree from an array
 *
 * @tree: a double pointer to the root node of the BST to insert the value.
 * @value: the value to store in the node to be inserted.
 *
 * Return: a pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *temp = NULL;
	bst_t *second = NULL;
	bst_t *new_node = NULL;

	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));

	temp = *tree;
	while (temp)
	{
		second = temp;
		if (value < temp->n)
			temp = temp->left;
		else if (value > temp->n)
			temp = temp->right;
		else if (value == temp->n)
			return (NULL);
	}

	new_node = binary_tree_node(NULL, value);
	if (second == NULL)
		second = new_node;
	else if (value < second->n)
	{
		second->left = new_node;
		new_node->parent = second;
	}
	else
	{
		second->right = new_node;
		new_node->parent = second;
	}

	return (new_node);
}
