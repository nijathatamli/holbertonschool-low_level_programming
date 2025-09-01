#include "main.h"
#include <stdio.h>
/**
 * 
 * 
 */
int print_last_digit(int a)
{
if (a < 0)
{
a = a * (-1);
}
_putchar((a % 10) + '0');
return (a % 10);
}  