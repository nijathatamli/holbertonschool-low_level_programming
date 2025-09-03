#include "main.h"
void print_to_98(int n)
{
if (n < 98)
{
int s = 0;
while (s <= 98)
{
if (s < 10)
{
_putchar(s + '0');
}
else
{
_putchar((s / 10) + '0');
_putchar((s % 10) + '0');
}
if (s != 98)
{
_putchar(',');
_putchar(' ');
}
s++;
}
}
if (n > 98)
{
while (n > 0)
{
_putchar(n % 10 + '0');
n = n / 10;
}
n--;
}
else
{
_putchar('9');
_putchar('8');
}
_putchar('\n');
}
