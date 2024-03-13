#include "main.h"
/**
 * malloc_checked - function name
 * @b: allocated memory
 * Return: apointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *a;

a = malloc(b);
if (a == NULL)
{
exit(98);
}

return (a);
}
