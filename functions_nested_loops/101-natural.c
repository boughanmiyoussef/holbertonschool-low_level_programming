#include <stdio.h>
/**
 * main - Prints  multiplies of 3 or 5
 *
 * Return: Always 0.
 */
int main(void)
{
int x, y;
for (x = 1; x < 1024; x++)
{
if ((x % 3) == 0 || (x % 5) == 0)
y += x;
}
printf("%d\n", y);
return (0);
}
