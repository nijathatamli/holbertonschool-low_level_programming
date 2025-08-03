#include "main.h"
/**
 * string_toupper - Entry point
 * @a: description for a
 *
 * Return: Always 0 (Success)
 */
char *string_toupper(char *a)
{
	int i = 0;
	char j;

while (*(a + i) != '\0')
{
j = *(a + i);
if (*(a + i) >= 97 && *(a + i) <= 122)
{
*(a + i) = j - 32;
i++;
}
else
{
i++;
}
}
return (a);
}
