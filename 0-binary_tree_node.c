#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *binary_tree_node - teh creating function of bi-tree
 *@parent: a pointer to the parent node of the node to create
 *@value: the  value to put to store in the new node
 *Return:  a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	NewNode = malloc(sizeof(binary_tree_t));
	if (NewNode == NULL)
	{
		return (NULL);
	}
	NewNode->n = value;
	NewNode->parent = parent;
	NewNode->left = NULL;
	NewNode->right = NULL;

	return (NewNode);
}
