#include "binary_trees.h"

int binary_compare(const binary_tree_t *tree);

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 * Return: 0 if the tree is NULL or other positive number otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_compare(tree));
}

/**
 * binary_compare - Auxiliar function of binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if the tree is NULL or other positive number otherwise
 */
int binary_compare(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left != NULL && tree->right != NULL)
		return (binary_compare(tree->left) && binary_compare(tree->right));
	else
		return (0);
}
