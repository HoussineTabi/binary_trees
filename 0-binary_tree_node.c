#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: Pointer to the parent node where we will insert the node
 * @value: the value of the new node
 *
 * Return: A pointer to the child node in success and NULL else
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	parent = node;
	return (node);
}
