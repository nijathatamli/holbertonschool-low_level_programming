
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
#include "holberton.h"
int _isupper(int c)
{
    if (c>= "A" && c<= "Z")
	return (1);
    else
	return (0);
}
