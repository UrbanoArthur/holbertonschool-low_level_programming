#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - fonction
 * @array: le tableau
 * @size: la taille du tableau
 * @action: le pointeur vers la fonction
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
