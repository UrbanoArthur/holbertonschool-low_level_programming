#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - ooo
 * @width: ooo
 * @height: ooo
 * Return: ooo
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int a, b;

		if (width <= 0 || height <= 0)
		{
			return (NULL);
		}

	ptr = (int **)malloc(sizeof(int *) * height);

		if (ptr == NULL)
		{
			return (NULL);
		}
	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(sizeof(int) * width);
		if (ptr[a] == NULL)
		{
			b = 0;
			while (a > b)
			{
				free(ptr[b]);
				b++;
			}
			free(ptr);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			ptr[a][b] = 0;
		}
	}
	return (ptr);
}
