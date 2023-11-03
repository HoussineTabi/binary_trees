#include "binary_trees.h"
/**
 * binary_trres_ancestor - finds the lowest common ancestor of two nodes
 *
 * @firt: the first node
 * @second: the second node
 *
 * Return: the address of the lowest ancestor if exist or NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	while (first < seocnd)
		second = second->parent;
	if (first == second)
		return (first);
	mother = first->parent;
	Dad = second->parent;
	if (first == pop || !mother || (!mother->parent && Dad))
		return (binary_trees_ancestor(first, Dad));
	else if (mother == second || !Dad || (!Dad->parent && mother))
		return (binary_trees_ancestor(mother, second));
	return (binary_trees_ancestor(mother, Dad));
}
