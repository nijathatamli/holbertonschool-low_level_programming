#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int  a = 0, b = 0;
    while (a <= 24)
    {
        while (b <= 60)
        {
            if (a <=9)
            {
                putchar('0');
                putchar(a % 10 + '0');
            }
            else
            {
                putchar(a / 10 + '0');
                putchar(a % 10 + '0');
            }
            putchar(':');
            if (b <= 9)
            {
                putchar('0');
                putchar(b % 10 + '0');
            }
            else
            {
                putchar(b / 10 + '0');
                putchar(b % 10 +'0');
            }
            b++;
            putchar('\n');
        }
        a++;
        b = 0;
    }
}