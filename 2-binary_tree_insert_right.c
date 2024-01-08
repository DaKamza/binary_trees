#include "binary_trees.h"

/**
 * binary_tree_insert_right - Puts a node as the right-child
 *                            of the other in a binary tree.
 * @parent: pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 *
 * Return: NULL - If an error occurs.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent has a right-child, the new node
 *              will replace the old right-child and is set as
 *              the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
