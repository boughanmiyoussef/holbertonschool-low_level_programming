#include "main.h"
/**
 * get_bit - function name
 * @n: number
 * @index: index
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int abc;

if (index > 64)
return (-1);

abc = n >> index;

return (abc & 1);
}