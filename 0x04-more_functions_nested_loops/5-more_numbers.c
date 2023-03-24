#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
int i = 0;
int j;
while (i < 10)
{
j = 0;
while (j < 15)
{
printf("%d", i);
j++;
}
printf("\n");
i++;
}
return;
}
