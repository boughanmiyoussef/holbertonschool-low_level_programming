#include "function_pointers.h"

/**
 * array_iterator - function name
 * @array: array
 * @size: size
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
action(array[i]);
}