#include "main.h"
/**
 * _strlen - Entry point
 * @a: description for n
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *a)
{
	int s = 0;

	while (*a != '\0')
	{
		s++;
		a++;
	}
	return (a);
}
