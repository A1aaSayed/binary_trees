#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 * as the left-child of another node
 * @parent: Pointer to the parent node
 * @value: value stored in the node
 * Return: pointer to the created node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp;

	if (!node)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (parent->left)
	{
		temp = parent->left;
		parent->left = node;
		node->left = temp;
	}
	else
		parent->left = node;
	return (node);
}
