#include "main.h"
#include <stdio.h>
/**
 * _strlen - Entry point
 * @s: description for n
 *
 * Return: Always 0 (Success)
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
