#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'putchar'
 *
 * Return: void
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
