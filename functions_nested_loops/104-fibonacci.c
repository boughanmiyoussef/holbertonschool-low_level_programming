#include <stdio.h>
/**
 * main -  prints Fibonacci numbers,
 * Return: 0
 */
int main(void)
{
	long x = 1, y = 2, z;
printf("1, 2");
while (z < 20365011073)
{
z = x + y;
printf(", %lu", z);
x = y;
y = z;
}
printf("\n");
return (0);
}
