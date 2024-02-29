#include "binary_trees.h"
/**
 * binary_tree_size - measure the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: the size of the binary tree. 0 if not found
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size ++;
		size = binary_tree_size(tree->left) + 1;
		size = binary_tree_size(tree->right) + 1;
	}

	return (size);
}
