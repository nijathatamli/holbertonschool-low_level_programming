#include "main.h"
/**
 * leet - Entry point
 * @s: description for s
 * Return: Always 0 (Success)
 */
char *leet(char *s)
{
int i = 0, j = 0;
char num[] = "43071";
char low[] = "aeotl";
char upp[] = "AEOTL";
while (s[i] != '\0')
{
j = 0;
while (low[j] != '\0')
{
if (s[i] == low[j] || s[i] == upp[j])
{
s[i] = num[j];
}
j++;
}
i++;
}
return (s);
}
