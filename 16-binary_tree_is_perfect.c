#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root node of tree
 * Return: 0 if null
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((binary_tree_is_full(tree) == 1) &&
			(binary_tree_balance(tree) == 0))
		return (1);
	return (0);
}
/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to root node of tree
 * Return: 1 if full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left)	&&
				binary_tree_is_full(tree->right));
	return (0);
}
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
	left += 1 + binary_tree_height(tree->left);
	right += 1 + binary_tree_height(tree->right);
	if (left > right)
		return (left);
	return (right);
}
