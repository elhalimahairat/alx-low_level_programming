#include "main.h"
/**
 *_strlen -a fonction print size of array
 *
 *@s : array
 *
 *Return: size of s (size)
 */
int _strlen(char *s)
{
int i, size;
i = 0;
size = 0;
while (s[i] != '\0')
{
i++;
size++;
}
return (size);
}
