#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    else
    {
        if (tree->left == NULL && tree->right == NULL)
            return (0);
        else
            return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
    }
}

