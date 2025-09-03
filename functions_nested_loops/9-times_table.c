#include "main.h"

void times_table(void)
{
int a = 0, b = 0;
while (a <= 9)
{
while (b <= 9)
{
if (a *b < 10)
{
_putchar((a * b) + '0');
}
else
{
_putchar((a * b) / 10 + '0');
_putchar((a * b) % 10 + '0');
}
if (b != 9)
{
_putchar(',');
if ((a * b) <= 9)
{
_putchar(' ');
_putchar(' '); 
}
}
else
{
_putchar(' ');
}
b++;
}
_putchar('\n');
a++;
b = 0;
}
}
