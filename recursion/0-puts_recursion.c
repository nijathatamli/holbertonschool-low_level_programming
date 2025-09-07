#include "main.h"
/**
 * _puts_recursion - check the code
 * @s: - s is entry value, we are gonna read words in the s value
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(++s);
}
_putchar('\n');
return;
}
