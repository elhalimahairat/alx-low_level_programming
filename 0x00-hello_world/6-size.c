#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  /* main good */
int i ;
float l ;
char z ;
printf("Size of a char: %u byte(s)\n", (unsigned)sizeof(z));
printf("Size of an int: %u byte(s)\n", (unsigned)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long long int: %llu byte(s)\n", (unsigned long long)sizeof(i));
printf("Size of a float: %u byte(s)", (unsigned)sizeof(l));

return (0);
}
