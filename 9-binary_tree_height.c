#include "binary_trees.h"

/**
 *binary_tree_height -measures height of tree
 *@tree: pointer to the root node
 *Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_right_branch;
	size_t height_left_branch;

	if (!tree)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	height_left_branch = binary_tree_height(tree->left) + 1;
	height_right_branch = binary_tree_height(tree->right) + 1;
	if (height_left_branch > height_right_branch)
	{
		return (height_left_branch);
	}
	else
	{
		return (height_right_branch);
	}
}
