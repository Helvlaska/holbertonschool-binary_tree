#include <stddef.h> /*pour utiliser null*/
#include <stdlib.h> /*pour utiliser malloc / free*/
#include <stdio.h> /*pour utiliser printf*/
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_noeud; /*variable de stockage du nouveau noeud*/

	/*Allocation mémoire pour le nouveau noeud*/
	new_noeud = malloc(sizeof(binary_tree_t));
	if (new_noeud == NULL) /*on vérifie si l'allocation à fonctionnée*/
		return (NULL); /*si nok on renvoie null*/

	/*initialisation du nouveau noeud*/
	new_noeud->n = value; /*on met la valeur dans le noeud*/
	new_noeud->parent = parent; /*on met le parent dans le noeud*/
	new_noeud->left = NULL; /*on met le coté gauche à null*/
	new_noeud->right = NULL; /*on met le coté droit à null*/

	/*on retourne le nouveau noeud*/
	return (new_noeud);
}
