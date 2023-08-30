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
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
	}

