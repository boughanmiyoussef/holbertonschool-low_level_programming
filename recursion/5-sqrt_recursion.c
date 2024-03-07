#include "main.h"
/**
 * sqrt_a - function name
 * @a: number for which the square root is to be found.
 * @b: current guess for the square root
 * Return: square root
*/
int sqrt_a(int a, int b)
{
if (b * b == a)
{
return (b);
}
else if (b * b > a)
{
return (-1);
}
return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - function name
 * @n: represents the number for which the square root is to be found.
 * Return: square root
*/
int _sqrt_recursion(int n)
{
return (sqrt_a(n, 0));
}
