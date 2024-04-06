#include "main.h"

/**
 * binary_to_uint - function name
 * @b: char string
 * Return: converted decimal number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int abc, def;
int size;

if (b == NULL)
return (0);

for (size = 0; b[size]; size++)
{
if (b[size] != '0' && b[size] != '1')
return (0);
}

for (def = 1, abc = 0, size--; size >= 0; size--, def *= 2)
{
if (b[size] == '1')
abc += def;
}

return (abc);
}