#include "binary_trees.h"

int max(int a, int b)
{
        if (a >= b)
                return (a);
        return (b);
}
/**
 * binary_tree_height -binary_tree_preorder
 *
 * @tree: tree
 * @func: func
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (-1);
        return (max(binary_tree_height(tree->left), binary_tree_height(tree->right)) + 1);
}