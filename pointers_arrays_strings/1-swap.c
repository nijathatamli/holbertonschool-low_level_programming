#include "main.h"
/**
 * swap_int - Entry point
 * @x: description for x
 * @y: description for y
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *x, int *y)
{
	int a;
	
	a = *x;
	*x = *y;
	*y = a;
}
