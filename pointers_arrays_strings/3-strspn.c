#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
   unsigned int i = 0;
   int a, b;
   for (a = 0;s[a] != '\0';a++)
{
    for (b = 0;accept[b] != '\0';b++)
    {
        if (s[a] == accept[b])
        {
            i++;
            break;
        }
    }
}
return(i);
}