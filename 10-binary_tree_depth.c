#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/* If tree is NULL or it's the root, return 0 */
	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}

	/* Recursive call: move up to the parent and add 1 to the count */
	depth = 1 + binary_tree_depth(tree->parent);

	return (depth);
}
