#include "binary_trees.h"
/**
 * binary_tree_delete - deletes a binary tree
 *
 * @root: The root node of the binary tree
 */
void binary_tree_delete(binary_tree_t *root)
{
	if (root)
	{
		binary_tree_delete(root->left);
		binary_tree_delete(root->right);
		free(root);
	}
}
