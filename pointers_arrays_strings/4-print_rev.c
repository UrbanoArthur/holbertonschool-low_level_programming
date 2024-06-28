#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - ooo
 * @s: ooo
 *
 */

void print_rev(char *s)

{
	int i;

	while (*s != '\0')
	{
		_putchar(*(s + _strlen(s) -  1 - i));
		s++;
		i++;
	}
	_putchar('\n');
}
