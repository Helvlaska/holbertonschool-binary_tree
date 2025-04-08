#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*répond à : est ce que le noeud est une feuille ?*/
	/*0 = non, 1 = oui*/

	if (node == NULL) /*vérifie si le noeud est vide*/
		return (0); /*si echec retourne 0*/

	/*vérifie si le noeud n'a pas d'enfants*/
	if (node->left == NULL && node->right == NULL)
		return (1); /*si sans enfants retourne 1*/

	return (0); /*retourne 0 si tout c'est bien passé*/
}
