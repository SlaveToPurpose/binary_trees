#include "binary_trees.h"

/**
 * binary_tree_node - Creates binary tree node
 * @parent: Pointer to parent of the node to create
 * @value: The value to input
 *
 * Return: Success - a pointer to new node
 *         Otherwise - NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	else
	{
		newNode->n = value;
		newNode->parent = parent;
		newNode->right = NULL;
		newNode->left = NULL;
	}

	return (newNode);
}
