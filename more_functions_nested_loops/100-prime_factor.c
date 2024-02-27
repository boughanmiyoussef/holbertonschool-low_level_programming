#include <stdio.h>

/**
 * main - entry point
 * Return: void
*/

int main(void) {
long int i, n, d;
n=612852475143;
for (i = 1; i <=n ; i++)
{
if( n % i == 0)
{
if (n == i)
{
printf("Largest prime factor: %ld\n", i);
break;
}
d = n / i ;
n = d ;
}
}
return (0);
}