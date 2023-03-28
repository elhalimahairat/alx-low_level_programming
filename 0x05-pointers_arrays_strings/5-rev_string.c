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
char l[i / 2];
while (i != 0)
{
i--;
if (n <= (i / 2))
{
l[n] = s[i];
s[i] = s[n];
}
else
s[i] = l[i];
n++;
}
return;
}
