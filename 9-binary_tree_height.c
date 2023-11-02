#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: Pointer to the root of the tree
 *
 * Return: returns the height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	if (tree->left)
		left_height = (1 + binary_tree_height(tree->left));
	if (tree->right)
		right_height = (1 + binary_tree_height(tree->right));
	if (left_height >= right_height)
		return (left_height);
	return (right_height);
}
