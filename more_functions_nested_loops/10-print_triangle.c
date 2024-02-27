#include "main.h"

/**
 * print_triangle - print triangles
 * Description: print a triangle
 * @size: size of the triangle
 * Return: void
*/
void print_triangle(int size)
{
int lines;
int columns;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (lines = 1; lines <= size; lines++)
{
for (columns = 0; columns < size; columns++)
{
if (columns < size - lines)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
}
