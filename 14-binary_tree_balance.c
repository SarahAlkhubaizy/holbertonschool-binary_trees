#include "binary_trees.h"

/**
 * tree_height_aux - Measures the height of a binary tree for balance factor
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of the tree. If tree is NULL, return 0.
 */
size_t tree_height_aux(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = tree_height_aux(tree->left);
	right_h = tree_height_aux(tree->right);

	if (left_h > right_h)
		return (left_h + 1);

	return (right_h + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Balance factor of the tree. If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0;
	int right_h = 0;

	if (tree == NULL)
		return (0);

	/* We cast to int because balance factor can be negative */
	left_h = (int)tree_height_aux(tree->left);
	right_h = (int)tree_height_aux(tree->right);

	return (left_h - right_h);
}
