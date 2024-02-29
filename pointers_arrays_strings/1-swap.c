#include "main.h"
/**
 * swap_int - the entry point
 * Description: Swap
 * @a: int
 * @b: int
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}

