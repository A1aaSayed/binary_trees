#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree
 * to measure the size.
 * Return: size of a binary tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftSize, rightSize, size;

	if (!tree)
		return (0);

	leftSize = binary_tree_size(tree->left);
	rightSize = binary_tree_size(tree->right);

	size = leftSize + rightSize + 1;

	return (size);
}
