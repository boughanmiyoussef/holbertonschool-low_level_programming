#include "main.h"
/**
 * _puts - entry point
 * Description: print a string followed by a new line
 * @str: The character
 * Return: void
*/
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
