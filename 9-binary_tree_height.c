#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL, else return the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	/*compteurs de hauteur gauche et droite*/
	size_t left_height = 0, right_height = 0;

	if (tree == NULL) /*verifie si l'arbre est vide*/
		return (0); /*si echec retourne 0*/

	/*verifie si le noeud est une feuille*/
	if (tree->left == NULL && tree->right == NULL)
		return (0); /*il est à l'étage 0 on retourne 0*/

	/*on avance dans l'arbre gauche et incrémente le compteur*/
	left_height = binary_tree_height(tree->left);
	/*on avance dans l'arbre droite et incrémente le compteur*/
	right_height = binary_tree_height(tree->right);

	/*on compare les hauteurs gauche et droite*/
	/*ex : [098] = return([402]+[128]+1) soit return(0+1+1) = 2 = [098]*/
	if (left_height > right_height)
		return (left_height + 1); /*on retourne la hauteur gauche + 1*/
	else
		return (right_height + 1); /*on retourne la hauteur droite + 1*/
}
