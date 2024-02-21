#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'print combo '
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int one, two, three;
for (one = 0; one <= 7; one++)
{
for (two = one + 1; two <= 8; two++)
{
for (three = two + 1; three <= 9; three++)
{
putchar(one + '0');
putchar(two + '0');
putchar(three + '0');
if (one != 7 || two != 8 || three != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
