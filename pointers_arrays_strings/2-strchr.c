#include "main.h"

char *_strchr(char *s, char c)
{
    int i = 0;
    while (s[i] != c && s[i] != c)
    {
        s[i] = '\0';
    }
    if (s[i] == '\0')
        return (NULL);
    return (s + i);
}