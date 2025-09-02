#include "main.h"
void jack_bauer(void)
{
    int  a = 0, b = 0;
    while (a <= 23)
    {
        while (b <= 59)
        {
            if (a <=9)
            {
                _putchar('0');
                _putchar(a % 10 + '0');
            }
            else
            {
                _putchar(a / 10 + '0');
                _putchar(a % 10 + '0');
            }
            _putchar(':');
            if (b <= 9)
            {
                _putchar('0');
                _putchar(b % 10 + '0');
            }
            else
            {
                _putchar(b / 10 + '0');
                _putchar(b % 10 +'0');
            }
            _putchar('\n');
            b++;
        }
        b = 0;
        a++;
    }
}