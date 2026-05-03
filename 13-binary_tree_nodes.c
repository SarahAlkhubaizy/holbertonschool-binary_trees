#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: Number of nodes with children, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	/* Check if the current node has at least one child */
	if (tree->left != NULL || tree->right != NULL)
	{
		/* Add 1 for current node and recurse for children */
		count = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	}
	else
	{
		/* It's a leaf, don't count it, but check its children (base case for leaves) */
		return (0);
	}

	return (count);
}
