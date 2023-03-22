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
long long i = 1;
long long j = 2;
long long m= 3;
long long h =  1;
do{
printf("%d,\t", i);
printf("%d,\t", j);
printf("%d,\t\n", m);
i = j + m;
j = m + i;
m = i + j;
h =  12586269025;
}while(m > h);
return;
}
