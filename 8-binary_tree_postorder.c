#include "binary_trees.h"
/**
 * binary_tree_postorder - Check if node is a root
 *
 * @tree: Pointer to the tree
 * @func: Pointer to the function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	binary_tree_preorder((*tree).left, func);
	binary_tree_preorder((*tree).right, func);
	func(tree->n);
}
