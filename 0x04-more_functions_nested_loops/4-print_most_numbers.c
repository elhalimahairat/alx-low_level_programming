#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
