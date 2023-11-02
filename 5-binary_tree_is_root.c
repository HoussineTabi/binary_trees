#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a node is root of a tree
 *
 * @node: the node to check
 *
 * Return: 0 if the node isn't root 1 if the node is root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
