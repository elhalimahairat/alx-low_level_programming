#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
while (i < 10)
{
putchar((char)(0 + i) % 10);
i++;

}
putchar('\n');
return (0);
}
