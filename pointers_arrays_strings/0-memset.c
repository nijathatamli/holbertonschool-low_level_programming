#include <stdio.h>
char *_memset(char *s, char b, unsigned int n)
{
    while (n > 0)
    {
        n--;
        s[n] = b;
    }
    return (s);
}