#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node, or NULL if no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/*si le node ou le node parent sont vide*/
	if (node == NULL || node->parent == NULL)
		return (NULL); /*renvoyer NULL*/

	/*si le node parent a deux enfants*/
	if (node->parent->left != NULL && node->parent->right != NULL)
	{
		if (node == node->parent->left) /*si node est l'enfant de gauche*/
			return (node->parent->right); /*retourner le node droite*/
		else
			return (node->parent->left);  /*sinon retourner le node gauche*/
	}
	else
		return (NULL); /*sinon renvoyer NULL*/
}
