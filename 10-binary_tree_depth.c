#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the node, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/*Compteur de profondeur de l'arbre*/
	size_t parent_depth = 0;

	if (tree == NULL) /*vérifie si l'arbre est vide*/
		return (0); /*si echec retourne 0*/

	/*si le noeud est la racine (root)*/
	if (tree->parent == NULL)
		return (0);
	else /*on remonte dans l'arbre par le parent & on incrémente le compteur*/
		parent_depth = binary_tree_depth(tree->parent);
	/*on retourne le compteur de profondeur + le noeud courant*/
	return (parent_depth + 1);
}
