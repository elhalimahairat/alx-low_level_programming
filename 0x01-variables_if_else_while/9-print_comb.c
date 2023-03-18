#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
char x[] = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9";
while (i < 28)
{
putchar(x[i]);
i++;

}
putchar('\n');
return (0);
}
