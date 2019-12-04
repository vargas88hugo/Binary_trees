#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if the tree is NULL or other positive number otherwise
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + 1 + right);
}
