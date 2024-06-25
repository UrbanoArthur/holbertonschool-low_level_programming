#include <stdio.h>
#include "main.h"
/**
 * _isdigit - 000
 * @c: 000
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
