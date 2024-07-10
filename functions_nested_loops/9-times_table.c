#include "main.h"
#include <stdio.h>
/**
 *
 *
 */

void times_table(void)
{
	int chiffre1, chiffre2;
	int product;
	for (chiffre1 = 0; chiffre1 < 10; chiffre1++)
	{
		for (chiffre2 = 0; chiffre2 < 10; chiffre2++)
		{
			product = chiffre1 * chiffre2;
		_putchar("%d", chiffre1);
		_putchar("%d", chiffre2);
	}
	_putchar('\n');
}
