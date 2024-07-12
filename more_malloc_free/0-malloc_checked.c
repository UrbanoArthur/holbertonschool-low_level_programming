#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * malloc_checked - ooo
 * @b: ooo
 *
 * Return: ooo
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
