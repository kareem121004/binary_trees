#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: pointer
 * Return: depth of a node in a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t cnt = 0;

	if (node == NULL)
		return (cnt);

	while (node->parent != NULL)
	{
		cnt++;
		node = node->parent;
	}
	return (cnt);
}
