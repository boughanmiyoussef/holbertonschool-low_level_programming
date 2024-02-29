#include "main.h"
/**
 * print_rev - entry point
 * Description: prints in reverse
 * @s: the character
 * Return: void
*/
void print_rev(char *s)
{
int j;
int i;
j = 0;
while (s[j] != '\0')
{
j++;
}
for (j -= 1; i >= 0 ; i--)
{
_putchar(s[j]);
_putchar('\n');
}
}


