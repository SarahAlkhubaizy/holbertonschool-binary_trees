#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Height of the tree
 */
size_t tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + tree_height(tree->left) + tree_height(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 if not or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (tree == NULL)
		return (0);

	/* Base case: a leaf node is perfect */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* A perfect tree must have both children */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Check height equality and recursive perfection */
	if (binary_tree_is_perfect(tree->left) &&
	    binary_tree_is_perfect(tree->right))
	{
		/* Use a helper logic to compare subtree sizes/heights */
		h_left = tree_height(tree->left);
		h_right = tree_height(tree->right);
		if (h_left == h_right)
			return (1);
	}

	return (0);
}
