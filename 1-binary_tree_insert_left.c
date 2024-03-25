#include "binary_trees.h"

/**
 * binary_tree_insert_left - adds a node at the left of the parent
 * @parent: the parent node
 * @value: the value of the node
 * Return: return a pointer to the new node or NULL if it fails
 *
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = new_node;
		return (new_node);
	}
	new_node->left = parent->left;
	parent->left->parent = new_node;
	parent->left = new_node;
	return (new_node);
}
