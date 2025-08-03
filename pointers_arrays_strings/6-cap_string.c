#include "main.h"
/**
 * cap_string - Entry point
 * @a: description for str
 *
 * Return: Always 0 (Success)
 */
char *cap_string(char *a)
{
char p[] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int i = 0, j = 0;
if (a[0] >= 'a' && a[0] <= 'z')
{
a[0] = a[0] - 32;
}
while (a[i] != '\0')
{
j = 0;
while (p[j] != '\0')
{
if (a[i] == p[j] && (a[i + 1] >= 'a' && a[i + 1] <= 'z'))
{
a[i + 1] = a[i + 1] - 32;
}
j++;
}
i++;
}
return (a);
}
