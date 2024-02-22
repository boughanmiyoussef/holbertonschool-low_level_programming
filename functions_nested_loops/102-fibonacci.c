#include <stdio.h>
/**
 * main - Prints the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
int a;
long int x, y, z;
x = 1;
y = 2;
printf("%ld, %ld", x, y);
for (a = 0; a < 48; a++)
{
z = x + y;
printf(", %ld", z);
x = y;
y = z;
}
printf("\n");
return (0);
}
