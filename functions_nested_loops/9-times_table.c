#include "main.h"
void times_table(void)

{
int p = 0;
int o = 0;

{
for (p = 0; p <= 9; p++)
{
for(o = 0; o <= 9; o++)
{
_putchar('0' + p * o / 10);
_putchar('0' + p * o % 10);
{
if (p == '9')
{
_putchar('\n');
}
_putchar('\n');
}
}
}
}
}
