#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print the strings
 * @separator: string between the integers
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int b;
	const char *c;

	va_start(a, n);
	for (b = 0; b < n; b++)
	{
		c = va_arg(a, const char*);
		if (c == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", c);
		}
		if (separator != NULL && b < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(a);
}
