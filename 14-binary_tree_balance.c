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
 ** binary_tree_balance - Measures the balance factor of a binary tree
 ** @tree: Pointer to the root node of the tree to measure the balance factor
 **
 ** Return: Balance factor of the tree, 0 if tree is NULL
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = (int)binary_tree_height(tree->left);
	right_h = (int)binary_tree_height(tree->right);

	return (left_h - right_h);
}
