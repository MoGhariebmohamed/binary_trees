#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 *binary_tree_delete -  delete entire binary tree
 *@tree: a  a pointer to the root node of the tree to delete
 *Return: (void)
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
	}
}
