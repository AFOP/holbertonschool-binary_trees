#include "binary_trees.h"
/**
 * binary_tree_preorder -binary_tree_preorder
 *
 * @tree: tree
 * @func: func
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
        if (tree == NULL && func == NULL)
        {
                return (NULL);
        }
        binary_tree_inorder(tree->left, func);
        binary_tree_inorder(tree->right, func);
        
}