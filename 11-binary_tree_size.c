#include "binary_trees.h"
/**
 * count - counts the size of a binary node.
 * @node: binary tree node to count.
 * @s: size of the tree to count.
 * Return: nothing.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
else
return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
