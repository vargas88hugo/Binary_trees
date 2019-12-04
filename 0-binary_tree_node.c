#include "binary_trees.h"

/**
 * binary_tree_node - This is a function that creates a binary node
 * @parent: pointer to the parent node
 * @value: value of the current node
 * Return: a pointer to the new node or NULL otherwise
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
