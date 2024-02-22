#include "main.h"
/**
 * times_table - Prints the  times table.
 */
void times_table(void)
{
int row, column, x;
for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
x= row * column;
if (column > 0)
{
_putchar(',');
if (x < 10) 
{
 _putchar(' ');
}
_putchar(' ');
}
if (x >= 10)
{
_putchar((x / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((x % 10) + '0');
}
_putchar('\n');
}
}
