#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if the node is a leaf or 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left != NULL || node->right != NULL)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
