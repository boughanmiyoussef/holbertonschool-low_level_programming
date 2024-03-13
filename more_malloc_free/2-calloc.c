#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - function name
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: return pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *abc;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

abc = malloc(nmemb * size);
if (abc == NULL)
return (NULL);

i = 0;
while (i < nmemb * size)
{
abc[i] = 0;
i++;
}

return (abc);
}
