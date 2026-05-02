#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);

	/* If node has a left child, calculate its height recursively */
	if (tree->left)
		left_h = 1 + binary_tree_height(tree->left);
	else
		left_h = 0;

	/* If node has a right child, calculate its height recursively */
	if (tree->right)
		right_h = 1 + binary_tree_height(tree->right);
	else
		right_h = 0;

	/* Return the maximum height between left and right */
	if (left_h > right_h)
		return (left_h);
	else
		return (right_h);
}
