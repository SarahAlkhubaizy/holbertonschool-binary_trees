#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 *
 * Return: A pointer to the sibling node, or NULL if:
 *         - node is NULL
 *         - parent is NULL
 *         - node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* 1. Safety check for NULL node or root (parent is NULL) */
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	/* 2. Check if node is the left child */
	if (node->parent->left == node)
	{
		/* Return the right child (even if it's NULL) */
		return (node->parent->right);
	}

	/* 3. If it wasn't the left child, it must be the right child */
	return (node->parent->left);
}
