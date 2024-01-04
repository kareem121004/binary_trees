#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is a root
 * @node: node
 * Return: 0 if is not a root, 1 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
