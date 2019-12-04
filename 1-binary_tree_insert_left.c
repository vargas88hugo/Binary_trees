#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node as the left child
 * @parent: pointer to the parent node
 * @value: value of the new node
 * Return: a pointer to the new node or NULL otherwise
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->left != NULL)
	{
		new->left = parent->left;
		new->left->parent = new;
	}
	parent->left = new;

	return (new);
}
