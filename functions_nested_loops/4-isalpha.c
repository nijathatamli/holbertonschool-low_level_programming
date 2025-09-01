#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Entry point
 * @c: variable
 *
 * Return: Always 0 or 1 (Success)
 */
int _islower(int c)
{
    if (c >= 97 && c <= 122)
    {
        return (1);
    }
    return (0);
}