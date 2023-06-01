#include "binary_trees.h"


/**
 * binary_tree_is_avl - Ca function that checks if a binary tree is a valid AVL Tree
 *
 * @tree: a pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid AVL Tree, and 0 otherwise,
 *  moreover If tree is NULL, return 0
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
         if (tree == NULL) {
        return 0; 
    }

    int left_height = get_height(tree->left);
    int right_height = get_height(tree->right);

    if (abs(left_height - right_height) > 1) {
        return 0;  
    }

    if (!binary_tree_is_avl(tree->left) || !binary_tree_is_avl(tree->right) ||
        !is_bst_helper(tree->left, INT_MIN, tree->value) ||
        !is_bst_helper(tree->right, tree->value, INT_MAX)) 
        {
        return 0;  
    }

    return 1; 
}
}

int is_bst_helper(const binary_tree_t *node, int min_value, int max_value)
{
if (node == NULL) 
{
        return 1; 
        }
    
    if (node->n <= min_value || node->n >= max_value)
    {
        return 0; 
    }
    
    int left_subtree = is_bst_helper(node->left, min_value, node->n);
    int right_subtree = is_bst_helper(node->right, node->n, max_value);
    
    return (left_subtree && right_subtree);
}
