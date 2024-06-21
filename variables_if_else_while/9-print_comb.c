#include <stdio.h>
/**
* main - ooo
*
* Return: 0
*/
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
if (c < '9')
putchar(',');
if (c < '9')
putchar(' ');
}
putchar('\n');
return (0);
}
