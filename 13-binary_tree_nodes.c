#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes with at least 1 child in
 * a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if the tree is null or other positive number otherwise
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (left + 1 + right);
	else
		return (left + right);
}
