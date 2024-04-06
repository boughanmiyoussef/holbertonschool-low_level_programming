#include "main.h"

/**
 * set_bit - function name
 * @n: pointer to number
 * @index: index
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int a;

if (index > 64)
return (-1);

for (a = 1; index > 0; index--, a *= 2)
;
*n += a;

return (1);
}
