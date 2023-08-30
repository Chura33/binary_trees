#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node at the left of a parent
* @parent: pointer to the node to insert the left-child in
* @value: value in the node
* Return: pointer to the created node, or NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	binary_tree_t *old = NULL;

	if (!node)
		return (NULL);
	node->n = value;

	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else
	{
		old = parent->left;
		parent->left = node;
		node->left = old;
	}
	return (node);
}

