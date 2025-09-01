#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Entry point
 * @a: variable
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int a)
{
a = a % 10;
if (a < 0)
{
a = a * (-1);
}
_putchar(a + '0');
return (a);
}
