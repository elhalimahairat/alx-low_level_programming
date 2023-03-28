#include "main.h"
/**
 *rev_string -a fonction print all of array in rev
 *
 *@s : array
 *
 *Return: all array
 */
void rev_string(char *s)
{
int i, n;
i = 0;
n = 0;
while (s[i] != '\0')
i++;
while (i != 0)
{
i--;
s[i] = s[n];
n++;
}
return;
}
