#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: Pointer to the parent node
 * @value: the value to put in the new node
 * Return:  pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (!parent)
	{
		return (NULL);
	}

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = new_node;
	}
	else
	{
		new_node->left = parent->left;
		parent->left = new_node;
	}

	return (new_node);
}