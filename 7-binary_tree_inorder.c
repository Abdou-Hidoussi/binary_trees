#include "binary_trees.h"
/**
 * binary_tree_inorder - Check if node is a root
 *
 * @tree: Pointer to the tree
 * @func: Pointer to the function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
