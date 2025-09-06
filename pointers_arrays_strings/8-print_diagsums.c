#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: pointer to first element of matrix (treated as 1D array)
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
    int s1 = 0, s2 = 0, i;

    for (i = 0; i < size; i++)
    {
        s1 += a[i * size + i];                
        s2 += a[i * size + (size - i - 1)];   
    }

    printf("%d, %d\n", s1, s2);
}
