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
long l = 0;
long m = i + j;
while (l <= 99)
{
int li = i;
int lin = j;
int lina = m;
if(li >= 0)
printf("%ld, ", li);
else
printf("%ld, ", -li);
if (lin >= 0)
{
if (l < 98)
printf("%ld, ", lin);
else if (l == 98)
printf("%ld", lin);
}
else
{
if (l < 98)
printf("%ld, ", -lin);
else if (l == 98)
printf("%ld", -lin)
}
if (lina >= 0)
{
if (l < 99)
printf("%ld, ", lina);
}
else
{
if (l < 99)
printf("%ld, ", -lina);
}
i = j + m;
j = m + i;
m = i + j;
l += 3;
}
printf("\n");
return;
}
