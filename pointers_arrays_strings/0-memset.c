#include <stdio.h>
#include "main.h"
/**
 * _memset - asign the same byte at each n
 * @s: the start of the memory
 * @b: the byte who will be asign
 * @n: the number of space
 * Return: s
 *
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
