#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts in the right of a node
 *
 * @parent: The parent node to insert in its right
 * @value: The value of the new node
 *
 * Return: The address of the new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->right == NULL)
		parent->right = node;
	else
	{
		node->right = parent->right;
		node->right->parent = node;
		parent->right = node;
	}
	return (node);
}
