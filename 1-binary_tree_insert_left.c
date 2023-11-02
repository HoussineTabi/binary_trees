#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts in the left of a node
 *
 * @parent: The parent of the node
 * @value: the value of the node
 *
 * Return: The address of the new node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;
	if (parent && parent->left == NULL)
		parent->left = node;
	else
	{
		node->left = parent->left;
		node->left->parent = node;
		parent->left = node;
	}
	return (node);
}
