#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - funtion point
 * @brief
 * @tree: node
 * Return: leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		size += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;
	return (size);

}