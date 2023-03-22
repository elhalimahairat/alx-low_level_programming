#include<stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int );
int main(void)
{
print_to_98(0);
print_to_98(98);
print_to_98(111);
print_to_98(81);
print_to_98(-10);
return (0);
}
void print_to_98(int n )
{
int a = n;
if (n >= 98)
{
while (n >= 98)
{
printf("%d, ", n);
n--;
}
n = a;
}
else
{
while (n <= 98)
{
printf("%d, ", n);
n++;
}
}
return;
}
