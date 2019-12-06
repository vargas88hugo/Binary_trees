#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if the tree is null and other positive number otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	else
		left = 0;

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	else
		right = 0;

	if (left > right)
		return (left);
	else
		return (right);
}
