#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times, each followed by a newline
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
char x;
int i;
for (i = 0; i <= 10; i++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}