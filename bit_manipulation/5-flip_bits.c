#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function name
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int abc;
int def;

abc = n ^ m;
def = 0;

while (abc)
{
def++;
abc &= (abc - 1);
}

return (def);
}
