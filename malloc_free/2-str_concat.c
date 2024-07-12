#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - ooo
 * @s1: ooo
 * @s2: ooo
 * Return: ooo
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, len1, len2;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;

	while (s2[len2] != '\0')
	{
		len2++;
	}
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < len1; a++)
	{
		str[a] = s1[a];
	}
	for (b = 0; b < len2; b++, a++)
	{
		str[a] = s2[b];
	}
	str[a] = '\0';
	return (str);
}

