#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  /* main good */
int i;
double li;
float l;
char z;
printf("Size of a char: %u byte(s)\n", (unsigned int)sizeof(z));
printf("Size of an int: %u byte(s)\n", (unsigned int)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned int)sizeof(li));
printf("Size of a long long int: %llu byte(s)\n", (unsigned int)sizeof(li));
printf("Size of a float: %u byte(s)\n", (unsigned int)sizeof(l));

return (0);
}
