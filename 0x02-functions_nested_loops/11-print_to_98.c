#include<stdio.h>
/**
 * print_to_98 -a fonction print numbers form n to 98
 * @n: input
 * Return: n-98
 */
void print_to_98(int n )
{
int a = n;
if (n >= 98)
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
n = a;
}
else
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
printf("%d\n", n);
return;
}
