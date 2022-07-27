#include "binary_trees.h"

/**
 * Write a function that inserts a node as the left-child of another node
 * Prototype: binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
 * Where parent is a pointer to the node to insert the left-child in
 * And value is the value to store in the new node
 * Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
 * If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *actual_node = NULL;

	new_node = binary_tree_node(parent, value);

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