#include <stddef.h> /*pour utiliser null*/
#include <stdlib.h> /*pour utiliser malloc / free*/
#include <stdio.h> /*pour utiliser printf*/
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node; /*variable de stockage du nouveau noeud*/

	if (parent == NULL) /*vérifier si le parent est null*/
		return (NULL); /*retourne null en cas d'échec*/

	/* Crée un nouveau noeud avec binary_tree_node */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL) /*verifier si bien crée*/
		return (NULL); /*retourne null en cas d'échec*/

	if (parent->left != NULL) /*si le parent à un enfant gauche*/
	{
		new_node->left = parent->left; /*bras G de N_N -> ancien node*/
		parent->left->parent = new_node; /*la tête de ancien node -> a N_N*/
	}

	parent->left = new_node; /*on dit new_node est l'enfant du parent*/

	return (new_node); /*on renvoie le nouveau noeud*/
}
