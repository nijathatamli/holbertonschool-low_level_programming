#include "main.h"
#include <stdio.h>
/**
 * 
 * 
 */
int print_sign(int n)
{
if (n > 0)
{
printf('+');
return (1);
}
if (n < 0)
{
printf('-');
return (-1);
}
else
{
printf('0');
return (0); 
}
}