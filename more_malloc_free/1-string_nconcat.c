#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - ooo
 *
 * @s1: ooo
 * @s2: ooo
 * @n: ooo
 *
 * Return: ooo
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, len1, len2;
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
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < len1; a++)
	{
		str[a] = s1[a];
	}
	len2 = 0;

	while (len2 < n)
	{
		str[len1 + len2] = s2[len2];
		len2++;
	}
	str[len1 + len2] = '\0';
	return (str);
}
