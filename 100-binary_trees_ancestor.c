#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: the first node
 * @second: the second node
 *
 * Return: the address of the lowest ancestor if exist or NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *Dad = NULL, *mother = NULL;

	if (!first || !second)
		return (NULL);
	while (first < second)
		second = second->parent;
	if (first == second)
		return ((binary_tree_t *)first);
	mother = first->parent;
	Dad = second->parent;
	if (first == Dad || !mother || (!mother->parent && Dad))
		return (binary_trees_ancestor(first, Dad));
	else if (mother == second || !Dad || (!Dad->parent && mother))
		return (binary_trees_ancestor(mother, second));
	return (binary_trees_ancestor(mother, Dad));
}
