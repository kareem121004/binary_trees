#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as the
 * right-child
 * @parent: node
 * @value: value
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *tmp;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = new_node;
		return (new_node);
	}
	tmp = parent->right;
	parent->right = new_node;
	new_node->right = tmp;
	tmp->parent = new_node;

	return (new_node);
}
