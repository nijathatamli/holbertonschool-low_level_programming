#include "main.h"
/**
 * print_square - Entry point
 * @size: var
 * Return: Always 0 (Success)
 */
void print_square(int s)
{
	int i, j;

	if (s <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < s; i++)
		{
			for (j = 0; j < s; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
