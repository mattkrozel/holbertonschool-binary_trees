#include "binary_trees.h"
/**
 * binary_tree_preorder - prints binary tree values in preorder
 * @tree: node to be printed
 * @func: prints the number
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree || func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}

}
