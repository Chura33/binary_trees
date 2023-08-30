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
	binary_tree_t *node = binary_tree_node(parent, value);

	if (parent == NULL)
		return (NULL);

	if (!node)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	return (node);
}

