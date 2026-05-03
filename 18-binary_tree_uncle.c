#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: A pointer to the node to find the uncle
 *
 * Return: A pointer to the uncle node, or NULL if:
 *         - node is NULL
 *         - node has no parent
 *         - node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* 1. Check if node, its parent, or its grandparent is NULL */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	/* 2. Identify the parent and the grandparent */
	/* If the parent is the left child of the grandparent... */
	if (node->parent->parent->left == node->parent)
	{
		/* ...the uncle must be the right child of the grandparent */
		return (node->parent->parent->right);
	}

	/* 3. If the parent is the right child of the grandparent... */
	/* ...the uncle must be the left child of the grandparent */
	return (node->parent->parent->left);
}
