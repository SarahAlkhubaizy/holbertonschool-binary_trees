#include "binary_trees.h"

/**
 * tree_stats - Measures the size and height of a tree to check perfection.
 * @tree: Pointer to the root node.
 * @height: Pointer to store the calculated height.
 *
 * Return: The size of the tree.
 */
size_t tree_stats(const binary_tree_t *tree, size_t *height)
{
	size_t left_h = 0, right_h = 0;
	size_t left_s = 0, right_s = 0;

	if (tree == NULL)
		return (0);

	left_s = tree_stats(tree->left, &left_h);
	right_s = tree_stats(tree->right, &right_h);

	*height = (left_h > right_h ? left_h : right_h) + 1;
	return (1 + left_s + right_s);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if perfect, 0 if NULL or not perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h = 0;
	size_t s = 0;
	size_t perfect_size = 1;
	size_t i;

	if (tree == NULL)
		return (0);

	s = tree_stats(tree, &h);

	/* Calculate 2^(height) - 1 */
	for (i = 0; i < h; i++)
		perfect_size *= 2;

	return (s == (perfect_size - 1));
}
