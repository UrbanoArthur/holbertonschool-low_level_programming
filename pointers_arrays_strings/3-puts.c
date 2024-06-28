#include <stdio.h>
#include "main.h"
/**
 * _puts - ooo
 * @str: ooo
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		{
			str++;
		}
	}
	_putchar('\n');
}
