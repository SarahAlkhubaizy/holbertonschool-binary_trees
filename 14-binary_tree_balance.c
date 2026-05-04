#include "binary_trees.h"

/**
 * bt_height - Measures the height of a binary tree for balance factor.
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: The height of the tree. If tree is NULL, return -1.
 */
int bt_height(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (-1);

	l = bt_height(tree->left);
	r = bt_height(tree->right);

	return ((l > r) ? (l + 1) : (r + 1));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: The balance factor. If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (bt_height(tree->left) - bt_height(tree->right));
}
