#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - ooo
 * @array: le tableau
 * @size: la taille du tableau (le nombre d'√l√ment
 * @cmp: le pointeur vers la fonction de comparaison
 * Return: a pour les entiers du tableau et -1 pour le reste
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
	}
	return (-1);
}
