#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/*vérifie si l'arbre est vide ou si la fonction est nulle*/
	if (tree == NULL || func == NULL)
		return; /*si echec retourne rien*/

	/*on parcours (recursive) le bras Gauche & on appelle func*/
	binary_tree_inorder(tree->left, func);
	func(tree->n); /*on appelle la fonction sur le 1e noeud (root)*/
	/*on parcours (recursive) le bras Droit & on appelle func*/
	binary_tree_inorder(tree->right, func);
}
