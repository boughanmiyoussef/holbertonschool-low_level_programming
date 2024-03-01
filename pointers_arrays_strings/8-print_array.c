#include <stdio.h>

/**
 * print_array - entry point
 * Description: print array
 * @a: first character of the string
 * @n: size of the array 
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i == 0)
printf("%d", a[i]);
else
printf(", %d", a[i]);
}
printf("\n");
}
