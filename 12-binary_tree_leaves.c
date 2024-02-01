#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The number of leaves in the tree, 0 if tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    else
    {
        if (tree->left == NULL && tree->right == NULL)
            return (1);
        else
            return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
    }
}


