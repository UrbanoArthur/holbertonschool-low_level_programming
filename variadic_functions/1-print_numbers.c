#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print the numbers
 * @separator: string between the integers
 * @n: integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int b;

	va_start(a, n);
	for (b = 0; b < n; b++)
	{
		if (separator != NULL && b > 0)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(a, int));
	}
	printf("\n");
	va_end(a);
}


