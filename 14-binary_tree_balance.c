#include "binary_trees.h"
<<<<<<< HEAD
/**
* binary_tree_height - height of a binary tree
* @tree: pointer to the root node
* Return: int
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t l, r;
if (!tree)
return (0);
l = binary_tree_height(tree->left);
r = binary_tree_height(tree->right);
if (l > r)
return (l + 1);
else
return (r + 1);
}
/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node
* Return: int
*/
int binary_tree_balance(const binary_tree_t *tree)
{
if (!tree)
return (0);
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
=======

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
size_t l = 0, r = 0;
l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
return ((l > r) ? l : r);
}
return (0);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree)
{
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
return (0);
}
>>>>>>> fb12adf808a38e5500d6040146a1a219f3ce8026
