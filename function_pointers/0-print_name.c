#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - la fonction
 * @name: les noms a afficher
 * @f: le pointeur vers la fonction print name
 * Return: rien
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
