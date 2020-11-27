#include "binary_trees.h"
/**
 * binary_tree_depth - Holberton
 *
 * @tree: Pointer to the tree
 * Return: Length  of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t p;

	if (!tree || !tree->parent)
		return (0);
	p = 0;

	p = 1 + binary_tree_depth(tree->parent);

	return (p);
}
