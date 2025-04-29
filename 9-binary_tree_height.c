#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree in edges
 * @tree: Pointer to the root node
 *
 * Return: Height (in edges), or 0 if tree is NULL or a leaf
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left = 0, right = 0;

    if (tree == NULL)
        return (0);

    if (tree->left)
        left = 1 + binary_tree_height(tree->left);
    if (tree->right)
        right = 1 + binary_tree_height(tree->right);

    return (left > right ? left : right);
}
