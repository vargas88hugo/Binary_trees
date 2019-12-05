#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: a pointer to the uncle node or NULL if has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		return (btSister(node->parent));
	}
}
/**
 * btSister - Function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: a pointer to the uncle node or NULL if has no uncle
 */
binary_tree_t *btSister(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	else
	{
		if (node->parent->left && node->parent->left != node)
		{
			return (node->parent->left);
		}

		if (node->parent->right && node->parent->right != node)
		{
			return (node->parent->right);
		}

		return (NULL);
	}
}
