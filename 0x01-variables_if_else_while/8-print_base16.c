#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
char x[] = "0123456789abcdef";
while (i < 16)
{
putchar(x[i]);
i++;

}
putchar('\n');
return (0);
}
