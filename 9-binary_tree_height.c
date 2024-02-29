#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree
 * to measure the height.
 * Return: height of a binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t leftHeight = binary_tree_height(tree->left);
	size_t rightHeight = binary_tree_height(tree->right);

	return ((leftHeight > rightHeight) ? leftHeight + 1 : rightHeight + 1);
}
