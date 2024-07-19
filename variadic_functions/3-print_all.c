#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print ANYTHING
 * 
 *
 *
 */
void print_all(const char * const format, ...)
{
	va_list a;
	unsigned int b;
	const char *c;

	va_start(a, format);
	for (b = 0; b < n; b++)
	{

	}
	printf("\n");
	va_end(a);
}
