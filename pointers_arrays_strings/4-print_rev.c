#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed in reverse
 */
void print_rev(char *s)
{
int length = 0;
int j;

while (s[length] != '\0')
{
length++;
}
for (j = length - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
