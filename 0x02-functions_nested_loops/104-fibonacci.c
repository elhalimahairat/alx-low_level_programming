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
long l = 3;
long m = i + j;
while (l <= 99)
{
long li = i;
long lin = j;
long lina = m;
if (li >= 0)
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
printf("%ld", -lin);
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
if (j >= 0)
{
if (m < 0)
i = j - m;
}
else if (j < 0)
{
if (m >= 0)
i = m - j;
}
else if ((j < 0) && (m < 0))
i = (m + j)*(-1);
else
i = m + j;

if (i >= 0)
{
if (m < 0)
j = i - m;
}
else if (i < 0)
{
if (m >= 0)
j = m - i;
}
else if ((i < 0) && (m < 0))
j = (m + i)*(-1);
else
j = m + i;
if (j >= 0)
{
if (i < 0)
m = j - i;
}
else if (j < 0)
{
if (i >= 0)
m = i - j;
}
else if ((j < 0) && (i < 0))
m = (i + j)*(-1);
else
m = i + j;
l += 3;
}
printf("\n");
return;
}
