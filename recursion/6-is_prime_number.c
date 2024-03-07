#include "main.h"
/**
 * prime - function name
 * @a: number
 * @b: divisor
 * Return: success
*/

int prime(int a, int b)
{
if (a <= 1 || (a != b && a % b == 0))
{
return (0);
}
else if (a == b)
{
return (1);
}
return (prime(a, b + 1));
}


/**
 * @n: number
 * Return: success
*/
int is_prime_number(int n)
{
return (prime(n, 2));
}
