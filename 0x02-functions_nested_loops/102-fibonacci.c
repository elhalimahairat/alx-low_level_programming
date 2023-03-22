#include<stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void Fibonacci(void);
int main(void)
{
Fibonacci();
return (0);
}
void Fibonacci(void)
{
long i = 1;
long j = 2;
long m = 3;
long h =  1;
long l = 32951280099;
long k = 20365011074;
do{
printf ("%ld, ", i);
if (j != k)
printf ("%ld, ", j);
else
printf ("%ld", j);
if (m < l )
printf ("%ld, ", m);
i = j + m;
j = m + i;
m = i + j;
h = 20365011074;
}while(i <= h);
printf("\n");
return;
}
