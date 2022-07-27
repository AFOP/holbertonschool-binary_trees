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
    binary_tree_t *node = malloc(sizeof(binary_tree_t));
    binary_tree_t *current;
    binary_tree_t *parent;

    node->n = value;
    node->left = NULL;
    node->right = NULL;

    if (parent == NULL)
    {
        parent = node;
    }
    else
    {
        current = node;
        parent = NULL;
        while (1)
        {
            parent = current;

            // go to left of the tree
            if (value < parent->n)
            {
                current = current->left;

                // insert to the left
                if (current == NULL)
                {
                    parent->left = node;
                    return;
                }
            }

            // go to right of the tree
            else
            {
                current = current->right;

                // insert to the right
                if (current == NULL)
                {
                    parent->right = node;
                    return;
                }
            }
        }
    }
}
