#include "binary_trees.h"

/**
* height - Helper function to compute height of tree
* @tree: Pointer to node
*
* Return: Height
*/
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + ((height(tree->left) > height(tree->right)) ?
		height(tree->left) : height(tree->right)));
}

/**
* binary_tree_balance - Measures the balance factor of a binary tree
* @tree: Pointer to the root node of the tree
*
* Return: Balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height(tree->left) - height(tree->right));
}
