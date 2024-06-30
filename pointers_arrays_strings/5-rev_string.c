#include <stdio.h>
#include "main.h"
/**
 * rev_string - ooo
 * @s: ooo
 */
void rev_string(char *s)

{
	int i = 0;
	int j = 0;
	char k;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		k = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = k;
	}
}

