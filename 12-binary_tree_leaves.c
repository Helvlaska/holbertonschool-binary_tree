#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the leaves
 *
 * Return: number of leaves, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/*compteur pour stocker le nombre de feuilles*/
	size_t total_leaf = 0, total_left = 0, total_right = 0;

	/*verifie si l'arbre est vide*/
	if (tree == NULL)
		return (0); /*si echec retourne 0*/

	/*vérifie si le noeud n'a pas d'enfants*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*on recupère les feuilles gauche*/
	total_left = binary_tree_leaves(tree->left);
	/*on récupère les feuilles droite*/
	total_right = binary_tree_leaves(tree->right);
	/*on additionne les feuilles gauche et droite*/
	total_leaf = total_left + total_right;

	return (total_leaf); /*on renvoie le tas de feuille*/
}
