#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
char x[] = "0123456789";
while (i < 10)
{
putchar(x[i]);
i++;

}
putchar('\n');
return (0);
}
