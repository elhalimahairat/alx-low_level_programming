#include "main.h"
/**
 *print_rev -a fonction print all of array in rev
 *
 *@s : array
 *
 *Return: all array
 */
void print_rev(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
i++;
while (i != 0)
{
i--;
printf("%c", s[i]);
}
printf("\n");
return;
}
