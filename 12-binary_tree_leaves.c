#include "binary_trees.h"

/**
 * binary_tree_leaves - function that measures the leaves of a binary tree
 * @tree: is a pointer to the root node of the tree
 * Return: leaves of a binary tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		leaves += 1;

	return (leaves);
}
