#include "binary_trees.h"
/**
 * binary_tree_size - measure the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: the size of the binary tree. 0 if not found
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0;
	size_t size_right = 0;


	if (!tree)
	{
		return (0);
	}

	if (tree->left)
	{
		size_left = 1 + binary_tree_size(tree->left);
	}
	if (tree->right)
	{
		size_right = 1 + binary_tree_size(tree->right);
	}
	return (size_left + size_right);
}
