#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 if the tree is NULL or not full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If node is a leaf (0 children), it is full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If node has two children, recursively check both subtrees */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	/* If node has only one child, it is not full */
	return (0);
}
