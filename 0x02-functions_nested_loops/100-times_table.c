#include "main.h"
/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
if ((n >= 0) && (n < 16))
{
int i, j, m;
m = 0;
for (i = 0; i < n + 1; i++)
{
for (j = 0; j < n; j++)
printf("%d, ", j*m);
printf("%d\n", n*m);
if (m != n)
m++;
}
}
return;
}
