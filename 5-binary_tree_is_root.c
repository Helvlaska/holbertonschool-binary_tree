#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/*répond à : est ce que le noeud est un parent ?*/
	/*0 = non, 1 = oui*/

	if (node == NULL) /*vérifie si le noeud est vide*/
		return (0); /*si echec retourne 0*/

	/*vérifie si le noeud n'a pas de parent*/
	if (node->parent == NULL)
		return (1); /*si sans parent retourne 1*/

	return (0); /*retourne 0 si tout c'est bien passé*/
}
