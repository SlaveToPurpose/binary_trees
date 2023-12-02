#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node as left-child
 * @parent: Pointer to node to insert left-child
 * @value: The value to store
 * Return: On Sucess - pointer to new node
 *	Otherwise - NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;

	return (newNode);
}