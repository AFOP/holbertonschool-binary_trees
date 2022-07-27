#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 * Return: If parent is NULL or an error occurs - NULL.
 * Otherwise - a pointer to the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *actual_node = NULL;

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent->left)
	{
		actual_node = parent->left;
		parent->left = new_node;
		new_node->left = actual_node;
		actual_node->parent = new_node;
	}
	else
	{
		parent->left = new_node;
	}

	return (new_node);
}
