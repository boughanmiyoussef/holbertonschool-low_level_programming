#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - function name
* @min: minimum
* @max: maximum
* Return: returns the pointer to the newly created array
**/

int *array_range(int min, int max)
{
int *abc;
int i;
int size;

if (min > max)
return (NULL);

size = max - min + 1;

abc = malloc(sizeof(int) * size);
if (abc == NULL)
return (NULL);
	
for (i = 0; i < size; i += 1)
abc[i] = min + i;
	
return (abc);
}
