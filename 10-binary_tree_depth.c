#include "binary_trees.h"
/**
 * @brief 
 * 
 * @param tree 
 * @return size_t 
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent)  1 + binary_tree_depth(tree->parent) : 0);
}