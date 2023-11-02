#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance of a binary tree
 * @tree: the root of the tree
 *
 * Return: the balance of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		right = 1 + binary_tree_balance(tree->right);
	return (left - right);
}
