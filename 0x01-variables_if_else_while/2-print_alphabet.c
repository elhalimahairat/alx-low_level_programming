#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0 ;
char x[] = "abcdefghijklmnopqrstuvwxyz";
while (i < 26) {
putchar(x[i]);
i ++;

}
putchar('\n');
return (0);
}
