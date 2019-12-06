#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth of a node in a
 * binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if the tree is null or other positive number otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int parent;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	parent = binary_tree_depth(tree->parent);

	return (parent + 1);
}
