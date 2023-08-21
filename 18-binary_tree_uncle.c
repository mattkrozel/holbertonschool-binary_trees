#include "binary_trees.h"

binary_tree_t *sibling(binary_tree_t *node);
/**
 * *binary_tree_uncle - finds uncle of node
 * @node: node to find uncle for
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (sibling(node->parent));
}
/**
 * *binary_tree_sibling - fins siblinng of node
 * @node: pointer to node to find sibling
 * Return: pointer to new sibling or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
