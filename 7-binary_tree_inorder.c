#include "binary_trees.h"
/**
 * binary_tree_inorder - prints binary tree values in preorder
 * @tree: node to be printed
 * @func: prints the number
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
