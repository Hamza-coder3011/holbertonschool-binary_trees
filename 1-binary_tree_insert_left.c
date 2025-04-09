#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: is a pointer to the node to insert the left-child in
* @value: is the value to store in the new node
*
* Return: Pointer to the created node, or NULL on faillure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	
	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);
	
	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}

	parent->left = node;

	return (node);
}
