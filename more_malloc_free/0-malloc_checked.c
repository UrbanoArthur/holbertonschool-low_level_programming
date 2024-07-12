#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 *
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;
	ptr = malloc (sizeof(void *) * b);
	if (ptr == NULL)
	{
		return ("98");
	}
	return (ptr);
}
