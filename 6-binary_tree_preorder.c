#include "binary_trees.h"
/**
 * binary_tree_preorder -binary_tree_preorder
 *
 * @tree: tree
 * @func: func
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (func)
		func(tree->n);
	else
		return;
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
