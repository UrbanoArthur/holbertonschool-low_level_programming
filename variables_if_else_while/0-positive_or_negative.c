#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
printf("is negative");
if (n == 0)
printf("is zero");
if (0 < n)
printf("is positive");
return (0);
}
