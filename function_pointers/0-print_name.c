#include <stdio.h>
#include "function_pointers.h"
/**
 *
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char, void, char);
	ptr = &print_name;
	return (ptr);
}
