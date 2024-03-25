#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the
 * height of a binary tree.
 * @tree: a pointer to the root node of the tree.
 * Return: the height of the tree,
 * 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((left_h > right_h) ? left_h : right_h);
}

