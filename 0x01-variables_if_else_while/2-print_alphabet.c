#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char irat[] = "abcdefghijklmnopqrstuvwxyz";
for (int i = 0 ; i < 26 ; i++)
putchar(irat[i]);
putchar('\n');
return (0);
}
