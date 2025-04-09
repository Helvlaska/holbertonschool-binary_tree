#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: 0 if tree is NULL, else return the number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/*compteur pour stocker le nombre de noeud*/
	size_t total_nodes = 0, total_left = 0, total_right = 0;

	/*vérifie si l'arbre est vide*/
	if (tree == NULL)
		return (0); /*si echec retourne 0*/

	/*verifie si le noeud est une feuille*/
	if (tree->left == NULL && tree->right == NULL)
		return (0); /*il est à l'étage 0 on retourne 0*/
	else
	{
		/*cherche la hauteur a gauche*/
		total_left = binary_tree_nodes(tree->left);
		/*cherche la hauteur a droite*/
		total_right = binary_tree_nodes(tree->right);
		/*on additionne la gauche et la droite*/
		total_nodes = total_left + total_right;
	}

	return (total_nodes + 1); /*on renvoie la somme + le current*/
}