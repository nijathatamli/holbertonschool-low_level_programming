#include "main.h"
/**
 * reverse_array - Entry point
 * @n: description for n
 * @a: yeah right
 *
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
int i, j, temp;
j = n - 1;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
j--;
}
}
