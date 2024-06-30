#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - ooo
 * @str: ooo
 */
void puts_half(char *str)

{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i >= 5)
		{
			_putchar (str[i]);
		}
	}
	_putchar ('\n');
}
