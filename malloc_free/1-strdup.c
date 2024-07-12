#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * @str: ooo
 *
 * _strdup - ooo
 *
 * Return: ooo
 */
char *_strdup(char *str)

{
	char *ptr;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, str);
	return (ptr);
}

