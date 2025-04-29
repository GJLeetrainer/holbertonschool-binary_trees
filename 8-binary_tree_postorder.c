#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using
 * post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node (receives node value)
 *
 * Description: Post-order traversal = Left → Right → Root
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);   /* Traverse left */
	binary_tree_postorder(tree->right, func);  /* Traverse right */
	func(tree->n);                              /* Visit root */
}
