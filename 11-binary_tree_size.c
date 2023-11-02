#include "binary_trees.h"
/**
 * binary_tree_size - measures the height of a binary tree
 *
 * @tree: Pointer to the root of the tree
 *
 * Return: returns the size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	count = (1 + binary_tree_size(tree->left));
	count += (binary_tree_size(tree->right));
	return (count);
}
