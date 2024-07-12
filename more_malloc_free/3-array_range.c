#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - ooo
 * @min: ooo
 * @max: ooo
 * Return: ooo
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a;

	ptr = malloc(sizeof(int) * (max - min + 1));

	for (a = 0; a <= max - min; a++)
	{
		ptr[a] = min + a;
	}
	return (ptr);
}
