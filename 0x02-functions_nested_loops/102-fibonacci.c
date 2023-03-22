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
long i = 1;
long j = 2;
long m= 3;
long h =  1;
do{
printf("%ld,\t", i);
printf("%ld,\t", j);
printf("%ld,\t\n", m);
i = j + m;
j = m + i;
m = i + j;
h =  12586269025;
}while(m > h);
return;
}
