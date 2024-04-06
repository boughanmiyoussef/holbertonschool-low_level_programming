#include "main.h"

/**
 * print_binary - function name
 * @n: decimal number to print as binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int tmp;
int abc;

if (n == 0)
{
printf("0");
return;
}

for (tmp = n, abc = 0; (tmp >>= 1) > 0; abc++)
;

for (; abc >= 0; abc--)
{
if ((n >> abc) & 1)
printf("1");
else
printf("0");
}
}
