#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least a child
 * @tree: Pointer
 * Return: Number of nodes of the tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
