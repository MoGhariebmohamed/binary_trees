#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * get_max - Get the maximum of two values.
 * @a: First value.
 * @b: Second value.
 *
 * Return: The larger of the two values.
 */
size_t get_max(size_t a, size_t b) {
    return a > b ? a : b;
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree, 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    else
    {
        return (1 + get_max(binary_tree_height(tree->left), binary_tree_height(tree->right)));
    }
}
