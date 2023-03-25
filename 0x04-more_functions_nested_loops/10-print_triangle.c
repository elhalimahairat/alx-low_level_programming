#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
int i = 0;
int j = size;
int m = size;
int n = 1;
int l = 1;
while (i < size)
{
while (n < size)
{
_putchar(' ');
n++;
}
while (j <= size)
{
_putchar('#');
j++;
}
_putchar('\n');
m--;
l++;
n = l;
j = m;
i++;
}
if (size <= 0)
_putchar('\n');
return;
}
