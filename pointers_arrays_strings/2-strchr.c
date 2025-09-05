#include "main.h"

/**
 * _strchr - locates the first occurrence of a character in a string
 * @s: the string to search in
 * @c: the character to locate
 *
 * Return: pointer to the first occurrence of c in s,
 * or NULL if c is not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);

return (NULL);
}
