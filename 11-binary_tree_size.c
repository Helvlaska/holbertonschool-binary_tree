#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of the tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/*compteur qui stock le nombre de noeud de l'arbre*/
	size_t total_node = 0, total_left = 0, total_right = 0;

	/*verifie si l'arbre est vide*/
	if (tree == NULL)
		return (0); /*si echec retourne 0*/

	/*on avance dans l'arbre gauche et incrémente le compteur*/
	total_left = binary_tree_size(tree->left);
	/*on avance dans l'arbre droite et incrémente le compteur*/
	total_right = binary_tree_size(tree->right);
	/*on additionne le côté gauche et le côté droite + le current node*/
	total_node = (total_left + total_right + 1);

	return (total_node);
}
