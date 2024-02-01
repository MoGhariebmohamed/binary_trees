#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 *binary_tree_insert_left -  inserts a node as the left-child of another node
 *@parent: a pointer to the parent node of the node to create
 *@value: the  value to put to store in the new node
 *Return: return a pointer to the created node, or NULL on failure||parent NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	if (parent == NULL)
	{
	return (NULL);
	}
	NewNode = binary_tree_node(parent, value);
	if (NewNode == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		NewNode->left = parent->left;
		parent->left->parent = NewNode;
  	}
	parent->left = NewNode;

	return (NewNode);
}
