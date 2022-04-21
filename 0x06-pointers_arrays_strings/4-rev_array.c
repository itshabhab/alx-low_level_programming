#include "main.h"
/**
 * reverse_array - Reverses the content of an arrat of integers
 * @a: the arrat of intehers to be reversed
 * @n: the numner of elemets in the array
 */
void reverse_array(int *a, int n)
{
int tmp, index;
for (index = n - 1; index >= n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
