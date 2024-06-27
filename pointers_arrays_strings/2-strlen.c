#include <stdio.h>
#include "main.h"
/**
 * _strlen - ooo
 * @s: ooo
 * Return: ooo
 */
int _strlen(char *s)

{
int length = 0;

while (s[length] != '\0')
{
length++;
}
return (length);
}
