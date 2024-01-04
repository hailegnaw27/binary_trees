#include "binary_trees.h"

/**
* binary_tree_postorder - Performs a post-order traversal on a binary tree
* @tree: Pointer to the root node of the tree to traverse
* @func: Pointer to the function to call for each node
*
* Description: The function traverses the tree in post-order and applies
* the given function to each node's value.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
