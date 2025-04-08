#include <stddef.h> /*pour utiliser null*/
#include <stdlib.h> /*pour utiliser malloc / free*/
#include <stdio.h> /*pour utiliser printf*/
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL) /*vérifie si l'arbre est vide*/
		return; /*si vide on renvoie rien*/

	binary_tree_delete(tree->left); /*récursive pour supp les bras gauche*/
	binary_tree_delete(tree->right); /*récursive pour supp les bras droite*/

	free(tree); /*on libère l'arbre*/
	tree = NULL; /*du coup on dit que l'arbre est vide*/
}
