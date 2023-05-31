#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a child node to the right
 * of its parent node
 * @parent: a pointer to the node to insert the child node
 * @value: value of the node
 * Return: return a pointer to the created node, or NULL on failure or
 * if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
	{
		return (NULL);
	}

	if (!parent)
	{
		return (NULL);
	}
	new_node->n = value;

	if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
	}
	else
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->parent = parent;
		new_node->right->parent = new_node;
		new_node->left = NULL;

	}
	return (new_node);
}
