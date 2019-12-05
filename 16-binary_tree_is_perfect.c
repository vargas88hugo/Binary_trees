#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 0 if the tree is null or other positive number otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		depth = searchDown(tree);
		return (btPerfect(tree, depth, 0));
	}
}
/**
 * btPerfect - Function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * @depth: pointer to the root node of the tree
 * @rank: pointer to the root node of the tree
 * Return: 0 if the tree is null or other positive number otherwise
 */
size_t btPerfect(const binary_tree_t *tree, int depth, int rank)
{
	if (tree == NULL)
	{
		return (1);
	}
	else
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (depth == rank + 1);
		}

		if (tree->left == NULL || tree->right == NULL)
		{
			return (0);
		}
		return (btPerfect(tree->left, depth, rank + 1) &&
				btPerfect(tree->right, depth, rank + 1));
	}
}
/**
 * searchDown - Function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 0 if the tree is null or other positive number otherwise
 */
size_t searchDown(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}
