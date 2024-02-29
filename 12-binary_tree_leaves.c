#include "binary_trees.h"
/**
 * binary_tree_leaves - count the leaves of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the count of the leaves. 0 if not found
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count);
}
