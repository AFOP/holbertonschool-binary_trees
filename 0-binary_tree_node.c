#include "binary_trees.h"

/**
 * binary_tree_node: function that creates a binary tree node
 * Where parent is a pointer to the parent node of the node to create
 * And value is the value to put in the new node
 * When created, a node does not have any child
 * Return: function must return a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

    binary_tree_t *new_node = NULL;

    new_node = malloc(sizeof(binary_tree_t));
    if (!new_node)
    {
        fprintf(stderr, "Error\n");
        return (NULL);
    }
    if (!value)
    {
        free(new_node);
        fprintf(stderr, "Error");
        return (NULL);
    }
    new_node->n = value;
    new_node->right = NULL;
    new_node->right = NULL;

    if (parent == NULL)
    {
        new_node->parent = NULL;
        return (new_node);
    }

    new_node->parent = parent;

    return (new_node);
}
