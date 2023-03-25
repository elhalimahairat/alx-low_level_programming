#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
int i = 0;
int j = n;
int m = n;

while (i < n)
{
while (j < n)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
m--;
j = m;
i++;
}
if (n <= 0)
_putchar('\n');
return;
}
