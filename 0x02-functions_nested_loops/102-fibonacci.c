#include<stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void Fibonacci();
int main(void)
{
Fibonacci();
return (0);
}
void Fibonacci(void){
int i = 1;
int j = 2;
int m= i + j;
while(m >= 12586269025){
printf("%d,\t", i);
printf("%d,\t", j);
printf("%d,\t\n", m);
i = j + m;
j = m + i;
m = i + j;
}
return;
}
