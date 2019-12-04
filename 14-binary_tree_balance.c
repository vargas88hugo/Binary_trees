#include "binary_trees.h"
/**
 * binary_tree_balance - Function that measures the balance factor of
 * a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if the tree is NULL or other positive number otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t treeBalance;

	if (tree == NULL)
	{
		return (0);
	}

	treeBalance = btHeight(tree->left) - btHeight(tree->right);
	return (treeBalance);
}
/**
 * btHeight - Function that measures the balance factor of
 * a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if the tree is NULL or other positive number otherwise
 */
size_t btHeight(const binary_tree_t *tree)
{
	size_t leftHeight = 0;
	size_t rightHeight = 0;

	if (tree == NULL)
	{
		return (-1);
	}

	if (tree->left)
	{
		leftHeight = 1 + btHeight(tree->left);
	}
	else
	{
		leftHeight = 0;
	}

	if (tree->right)
	{
		rightHeight = 1 + btHeight(tree->right);
	}
	else
	{
		rightHeight = 0;
	}

	if (leftHeight > rightHeight)
	{
		return (leftHeight);
	}
	else
	{
		return (rightHeight);
	}
}

