#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: var
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int s = 0;
	while (n>s)
	{
		_putchar(' ');
		s++;
	}
	_putchar('\\');
	_putchar('\n');
}
