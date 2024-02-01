#include "binary_trees.h"

/**
 * binary_tree_delete - Function uproots an entire binary tree.
 * @tree: tree to uproot.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
