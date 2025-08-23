#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function for searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*c)(int))
{
int i;
if (size == 0 || array == NULL || c == NULL)
return (-1);
for (i = 0; i < size; i++)
if (c(array[i]) != 0)
return (i);
}