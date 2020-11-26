#include "binary_trees.h"
/**
 * binary_tree_preorder - Check if node is a root
 *
 * @node: Pointer to the node
 * Return: 1 or 0
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	func((*tree).n);
	binary_tree_preorder((*tree).left, func);
	binary_tree_preorder((*tree).right, func);
}
