#include "main.h"
/** 
 * print_line - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_line(int c)
{
	int i =0;

	while (i < c)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
	
}
