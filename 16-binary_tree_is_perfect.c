#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * calculate_height - helper function to calculate the height of a tree
 * @tree: pointer to the root node of the tree
 *
 * Return: height of the tree
 */
int calculate_height(const binary_tree_t *tree)
{
	/*compteur de hauteur gauche et droite*/
	int height_left = 0, height_right = 0;

	if (tree == NULL) /*si arbre vide*/
		return (0); /*return 0*/

	height_left = calculate_height(tree->left); /*calcul height gauche*/
	height_right = calculate_height(tree->right); /*calcul height droite*/

	/*on retourne la height la + grande +1 (current node)*/
	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/*compteur de hauteur gauche et droite*/
	int height_left = 0, height_right = 0;
	/*compteur true false pour savoir si une branche est parfaite*/
	int left_perfect = 0, right_perfect = 0;

	if (tree == NULL) /*si l'arbre est vide*/
		return (0); /*return false*/

	/*si le node est une feuille*/
	if (tree->left == NULL && tree->right == NULL)
		return (1); /*return true*/

	/*si le node n'a qu'un enfant*/
	if ((tree->left == NULL && tree->right != NULL) ||
	    (tree->left != NULL && tree->right == NULL))
		return (0); /*return false*/

	/* On calcule la hauteur des deux sous-arbres */
	height_left = calculate_height(tree->left);
	height_right = calculate_height(tree->right);

	/*si les hauteurs sont différentes*/
	if (height_left != height_right)
		return (0); /*return false*/

	/*on vérifie si les branches sont parfaites*/
	left_perfect = binary_tree_is_perfect(tree->left);
	right_perfect = binary_tree_is_perfect(tree->right);

	/*si les deux branches sont parfaites*/
	if (left_perfect == 1 && right_perfect == 1)
		return (1); /*on return true*/
	else
		return (0); /*sinon on return false*/
}



