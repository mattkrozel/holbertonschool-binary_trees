#include "binary_trees.h"
/**
 * binary_tree_leaves - counts leaves in binary tree
 * @tree: pointer to node of tree to count leaves
 * Return: 0 if tree is null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		leaves += 1;
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
