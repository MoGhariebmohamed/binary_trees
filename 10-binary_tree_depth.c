#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node for which to measure the depth.
 *
 * Return: The depth of the node, 0 if tree is NULL or if the node has no parent.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL || tree->parent == NULL)
        return (0);
    else
    {
        return (1 + binary_tree_depth(tree->parent));
    }
}
