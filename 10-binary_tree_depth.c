#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in the tree
 * @tree:  pointer to the node
 * Return: depth of the binary tree, 0 if not found
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth  = 0;
	const binary_tree_t *temp = tree;

	if (tree == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		temp = temp->parent;
		depth++;
	}
	return (depth);

}
