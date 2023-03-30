#include "main.h"
/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] >= 97) && (s[i] <= 122))
{
if (((s[i - 1] >= 32) && (s[i - 1] <= 47)) || (s[i - 1] == 59) || (s[i - 1] == 63) || (s[i] == 2) || (s[i - 1] == '\n') || (s[i - 1] == '{') || (s[i - 1] == '}'))
s[i] = (s[i] - 32);
}
}
return (s);
}
