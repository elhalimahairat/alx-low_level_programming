#include "main.h"
/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 * print_numbers not print 2 and 4
 * Return: 0-9 followed by newline
 */
void print_most_numbers(void)
{
int i = 0;
while (i < 10)
{
if ((i != 2) && (i != 4))
printf("%d", i);
i++;
}
printf("\n");
return;
}
