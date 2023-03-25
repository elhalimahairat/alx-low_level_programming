#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long i = 0;
long lp;
while (i < 612852475143)
{
int test = 1;
long j = 2;
while (j < i)
{
if (i % j == 0)
test = 0;
j++;
}
if(test == 1)
{
if (612852475143 % i == 0)
lp = i;
}
i++;
}
printf("%ld\n", lp);
return (0);
}
