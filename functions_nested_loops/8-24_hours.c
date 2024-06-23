#include "main.h"
/**
 * main - ooo
 *
 *@c: ooo
 * Return: 0
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;
	for (h = 0; h < 24; h++)
	{
	for (m = 0; m < 60; m++)

	{
		if(h < 10)
		{
			putchar('0');
		}
		putchar('0' + h);
		putchar(':');
		if (m < 10)
	{
		putchar('0');
	}
		putchar('0' + m);
	}
}
