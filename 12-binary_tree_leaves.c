#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the leaves
 *
 * Return: The number of leaves, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_l = 0;
	size_t leaves_r = 0;

	/* 1. Base case: If tree is NULL, it's not a leaf */
	if (tree == NULL)
	{
		return (0);
	}

	/* 2. Check if the current node is a leaf */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/* 3. Recursive step: Sum leaves from both sides */
	leaves_l = binary_tree_leaves(tree->left);
	leaves_r = binary_tree_leaves(tree->right);

	return (leaves_l + leaves_r);
}
