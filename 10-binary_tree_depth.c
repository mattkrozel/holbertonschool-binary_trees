#include "binary_trees.h"
/**
 * binary_tree_depth - measures depth of node in binary tree
 * @tree: pointer to node of depth to measure
 * Return: 0 if null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	if (tree->parent)
		depth += 1 + binary_tree_depth(tree->parent);
	return (depth);
}
