#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a node as the right child
 * @parent: pointer to the parent node
 * @value: value of the new node
 * Return: a pointer to the new node or NULL otherwise
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	else
	{
		binary_tree_t *newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
	{
		return (NULL);
	}

	if (parent->right == NULL)
	{
		parent->right = newNode;
	}
	else
	{
		newNode->right = parent->right;
		parent->right = newNode;
		newNode->right->parent = newNode;
	}
	return (newNode);
	}
}
