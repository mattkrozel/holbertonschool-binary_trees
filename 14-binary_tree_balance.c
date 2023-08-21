#include "binary_trees.h"
/**
 * binary_tree_balance - measures balance factor of binary tree
 * @tree: pointer to node of tree to calculate balance
 * Return: 0 if tree is null or balance factor of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}

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
