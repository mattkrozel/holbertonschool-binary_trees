#include "binary_trees.h"
/**
 * binary_tree_height - gets height of binary tree
 * @tree: node to draw height from tree
 * Return: height or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left += 1 + binary_tree_height(tree->left);
	if (tree->right)
		right += 1 + binary_tree_height(tree->right);
	if (left > right)
		return (left);
	else
		return (right);
}
