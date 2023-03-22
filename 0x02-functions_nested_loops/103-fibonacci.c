#include<stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void Fibonacci_1(void);
int main(void)
{
Fibonacci_1();
return (0);
}
/**
 * Fibonacci_1 - check the code.
 *
 * end in 50.
 */
void Fibonacci_1(void)
{
int sum = 0;
long i = 1;
long j = 2;
long l = 4000000;  
long m = i + j;
do {
if ((i % 2) == 0)
sum += i;  
if ((j % 2) == 0)
sum += j;  
if ((m % 2) == 0)
sum += m;
i = j + m;
j = m + i;
m = i + j;
} while ((i < l) && (j < l) && (m < l));
printf("%ld\n", sum);
return;
}
