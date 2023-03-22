#include<stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void Fibonacci_2(void);
int main(void)
{
Fibonacci_2();
return (0);
}
/**
 * Fibonacci_2 - check the code.
 *
 * end in 50.
 */
void Fibonacci_2(void)
{
long i = 1;
long j = 2;
long l = i + j;
long m = i + j;
while (l <= 99)
{
printf("%ld, ", i);
if (l < 98)
printf("%ld, ", j);
else if (l == 98)
printf("%ld", j);
if (l < 99)
printf("%ld, ", m);
i = j + m;
j = m + i;
m = i + j;
l += 3;
}
printf("\n");
return;
}
