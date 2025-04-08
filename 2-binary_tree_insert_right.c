#include <stddef.h> /*pour utiliser null*/
#include <stdlib.h> /*pour utiliser malloc / free*/
#include <stdio.h> /*pour utiliser printf*/
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node; /*variable de stockage du nouveau noeud*/

	if (parent == NULL) /*vérifier si le parent est null*/
		return (NULL); /*retourne null en cas d'échec*/

	new_node = binary_tree_node(parent, value); /*créer le nouveau noeud*/
	if (new_node == NULL) /*vérifier si la création du noeud a échoué*/
		return (NULL); /*retourne null en cas d'échec*/

	if (parent->right != NULL) /*vérifier si le parent a déjà un enfant droit*/
	{
		new_node->right = parent->right; /*bras D de N_N -> ancien node*/
		parent->right->parent = new_node; /*la tête de ancien node -> a N_N*/
	}

	parent->right = new_node; /*on dit new_node est l'enfant du parent*/

	return (new_node); /*retourne le nouveau noeud*/
}
