#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'This function prints the lowercase alphabet characters
 *              from 'a' to 'z', each followed by a new line.'
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char alpha;
for (alpha = 'a' ; alpha <= 'z' ; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
