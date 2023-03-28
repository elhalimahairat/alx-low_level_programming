#include "main.h"
/**
 *_puts -a fonction print all of array
 *
 *@str : array
 *
 *Return: all array
 */
void _puts(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
printf("%c", str[i]);
i++;
}
printf("\n");
return;
}

