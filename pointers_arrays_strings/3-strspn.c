#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the string containing allowed characters
 *
 * Return: the number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i = 0;
    int a, b;

    for (a = 0; s[a] != '\0'; a++)
    {
        for (b = 0; accept[b] != '\0'; b++)
        {
            if (s[a] == accept[b])
            {
                break;
            }
        }
        if (accept[b] == '\0')
        {
            return (i);
        }
        i++;
    }
    return (i);
}
