#include<stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void mul_5_3(void);
int main(void)
{
mul_5_3();
return (0);
}

void mul_5_3(void)
{
int n = 0;
int sum = 0;
while (n < 1024)
{
if ((n % 3) == 0)
{
sum += n;
n++;
continue;
}

else if ((n % 5) == 0)
sum += n;
n++;
}
printf("%d\n", sum);
return;
}
