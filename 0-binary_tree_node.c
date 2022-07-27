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
    if (!parent)
    {
        binary_tree_t *root = malloc(sizeof(binary_tree_t));
        root->n = value;
        root->left = NULL;
        root->right = NULL;
        root->parent = root;
        return root;
    }
    if (parent->right == NULL && parent->left == NULL)
    {
        parent->n = value;
        return parent;
    }
}
