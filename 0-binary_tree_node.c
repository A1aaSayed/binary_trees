#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: value stored in the node
 * Return: binary tree node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree_node = malloc(sizeof(binary_tree_t));

	if (!tree_node)
		return (NULL);

	tree_node->n = value;   
	tree_node->parent = parent;
	tree_node->right = NULL;
	tree_node->left = NULL;
	
	return (tree_node);
}
