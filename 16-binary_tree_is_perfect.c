#include "binary_trees.h"

/**
 ** binary_tree_height - Measures the height of a binary tree
 ** @tree: Pointer to the root node of the tree
 ** Return: Height of the tree, 0 if tree is NULL
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	return (1 + (left_h > right_h ? left_h : right_h));
}

/**
 ** binary_tree_is_perfect - Checks if a binary tree is perfect
 ** @tree: Pointer to the root node of the tree
 ** Return: 1 if the tree is perfect, 0 otherwise
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h, nodes, perfect_n;

	if (tree == NULL)
		return (0);

	h = binary_tree_height(tree);
	nodes = (size_t)binary_tree_size(tree);
	perfect_n = (1 << h) - 1;

	return (nodes == perfect_n);
}

/**
 ** binary_tree_size - a function that measures the size
 ** of a binary tree.
 ** @tree: a pointer to the root node of the tree.
 ** Return: The size of the tree, or 0.
 **/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
