#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_height - this function determines the height of binary tree
* @tree: pointer to head node
* Return: this returns the a type of size_t
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (height);

	while (tree->left || tree->right)
	{
		height++;

		if (tree->left != NULL)
			tree = tree->left;
		else
			tree = tree->right;
	}
	return (height);
}
