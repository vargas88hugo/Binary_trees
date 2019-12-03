#include "binary_trees.h"

/**
 * binary_tree_delete - Function that deletes an entire binary tree
 * @tree: pointer to the root node of the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	else
	{
		if (tree->parent != NULL)
			free(tree->parent);
		if (tree->left != NULL)
			free(tree->left);
		if (tree->right != NULL)
			free(tree->right);
		free(tree);
	}

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
}
