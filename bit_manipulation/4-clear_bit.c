#include "main.h"
/**
 * clear_bit - function name
 * @n: pointer to number to change
 * @index: index
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i;
unsigned int abc;

if (index > 64)
return (-1);

abc = index;
for (i = 1; abc > 0; i *= 2, abc--)
;

if ((*n >> index) & 1)
*n -= i;

return (1);
}
