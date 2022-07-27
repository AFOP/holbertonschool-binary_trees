#include "binary_trees.h"
/**
 * max - funtion max between a and b
 * 
 * @a: variable 
 * @b: variable
 * @return height
 */
int max(int a, int b)
{
        if (a >= b)
                return (a);
        return (b);
}
/**
 * height -binary_tree_preorder
 *
 * @tree: tree
 * @func: func
 */
size_t height(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (-1);
        return (max(height(tree->left), height(tree->right)) + 1);
}
/**
 * height -binary_tree_preorder
 *
 * @tree: tree
 * @func: func
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height(tree));
}