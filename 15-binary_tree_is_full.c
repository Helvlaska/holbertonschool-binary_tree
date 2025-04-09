#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/*répond à : est ce que l'arbre est full ?*/
	/*0 = non, 1 = oui*/

	/*compteur pour parcourir l'arbre a droite et a gauche*/
	int cote_left = 0, cote_right = 0;

	if (tree == NULL) /*verifie si l'arbre est vide*/
		return (0); /*si echec retourne 0*/

	/*verifie si le noeud est une feuille = full*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*on vérifie si le noeud n'a qu'1 enfant = nok full*/
	else if (tree->right == NULL && tree->left != NULL)
		return (0);

	/*on lance les recursives du coté gauche et droite*/
	cote_left = binary_tree_is_full(tree->left);
	cote_right = binary_tree_is_full(tree->right);

	/*on verifie les retours des recursives*/
	if (cote_left == 1 && cote_right == 1)
		return (1); /*si full = 1*/
	else
		return (0); /*si nok = 0*/
}
