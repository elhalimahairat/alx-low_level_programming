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
char m;
i = 0;
n = 0;
while (s[i] != '\0')
i++;
while (n < (i / 2))
{
i--;
m = s[i];
s[i] = s[n];
s[n] = m;
n++;
}
return;
}
