#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node, or NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/*pointeur pour parcourir l'arbre*/
	binary_tree_t *cursor = node;

	/*si le node ou son parent est vide*/
	if (node == NULL || node->parent == NULL)
		return (NULL); /*retourne NULL*/

	cursor = node->parent; /*on remonte le curseur le parent*/

	if (cursor->parent == NULL) /*on verifie si il a un parent*/
		return (NULL); /*si echec renvoie NULL*/

	/*si le cursor parent a deux enfants*/
	if (cursor->parent->left != NULL && cursor->parent->right != NULL)
	{
		if (cursor == cursor->parent->left) /*si node est l'enfant de gauche*/
			return (cursor->parent->right); /*retourner le node droite*/
		else
			return (cursor->parent->left);  /*sinon retourner le node gauche*/
	}
	else
		return (NULL); /*sinon renvoyer NULL*/
}
