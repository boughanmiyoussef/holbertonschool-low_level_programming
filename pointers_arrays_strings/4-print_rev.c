#include "main.h"
/**
 * print_rev - entry point
 * Description: prints a string in reverse 
 * @s: the character
 * 
*/

void print_rev(char *s)
{
int i;
while ( s[i] !='\0' )
{
i++;
}
for (i -= 1; i >= 0; i-- )
{
_putchar(s[i]);
}
}