#include <stdio.h>
#include "main.h"
/**
 * _strcat - ooo
 * @dest: ooo
 * @src: ooo
 * Return: ooo
 *
 *
 */
char *_strcat(char *dest, char *src)

{
	int j = 0;
	int i = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
