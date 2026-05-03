#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if full, 0 if not full or tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* 1. If tree is NULL, return 0 as per requirements */
	if (tree == NULL)
	{
		return (0);
	}

	/* 2. If it's a leaf node, it's considered full */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/* 3. If it has both children, check their subtrees recursively */
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	}

	/* 4. If it has only one child, it's not full */
	return (0);
}
