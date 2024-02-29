#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree
 * to measure the height.
 * Return: height of a binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	return (max(leftHeight, rightHeight));
}

/**
 * max - find the maximum from two numbers
 * @a: first number
 * @b: secibd number
 * Return: the maximum number
*/
size_t max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
