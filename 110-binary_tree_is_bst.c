#include "binary_trees.h"
/**
 * binary_tree_is_bst - a function that checks if a binary tree is
 *  a valid Binary Search Tree.
 * @tree: a pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid BST, 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t* tree)
{
  if (tree == NULL)
    return (0);
  return (is_bst_util(tree, INT_MIN, INT_MAX));
}

/**
* is_bst_util -function is a recursive helper function that takes a binary
* tree node along with a minimum value and a maximum value.
* @node: a binary tree node.
* @min_val: the minimum value.
* @max_val: the maximum value.
*/
bool is_bst_util(const binary_tree_t* node, int min_val, int max_val)
{
  if (node == NULL)
    return (true);
  if (node->val <= min_val || node->val >= max_val)
    return (false);
  return (is_bst_util(node->left, min_val, node->val) && is_bst_util(node->right, node->val, max_val));
}
