#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
int i, j, m;
j = n - 1;
i = 0;
while (i < n / 2)
{
m = a[i];
a[i] = a[j];
a[j] = m;
i++;
j--;
}
return;
}
