#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - the variadic function
 * @n: the number of parameters
 * Return: le r√sultat
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int b;
	int result = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(a, n);
	for (b = 0; b < n; b++)
	{
		result += va_arg(a, int);
	}
	va_end(a);
	return (result);
}
