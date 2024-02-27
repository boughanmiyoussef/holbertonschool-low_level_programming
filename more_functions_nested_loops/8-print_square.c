#include "main.h"
/**
 * print_square - print squares
 * Description: print squares
 * @size: size of the square
 * Retrun: void
*/
void print_square(int size)
{
int a, b;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 1 ; a <= size ; a++)
{
for (b = 0 ; b < size ; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
