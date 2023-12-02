#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leafs in a binary tree.
 * @tree: A pointer to the root node
 *
 * Return: The number of leafs in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leafs = 0;

	if (tree)
	{
		leafs += (!tree->left && !tree->right) ? 1 : 0;
		leafs += binary_tree_leaves(tree->left);
		leafs += binary_tree_leaves(tree->right);
	}
	return (leafs);
}
