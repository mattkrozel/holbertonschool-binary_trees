#include "binary_trees.h"
/**
 * binary_tree_size - measures size of binary tree
 * @tree: pointer to node
 * Return: 0 if null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	size += 1 + binary_tree_size(tree->left);
	size += 1 + binary_tree_size(tree->right);
	return (size);
}
