#include "main.h"
/**
 * factorial - function name
 * @n: integer 
 * Description: Returns the factorial of a given number.
 * Return: Factorial
  */

int factorial(int n)
{
if (n < 0)
{
return (-1);
} 
else if (n == 0)
{
return(1);
} 
else
return (n * factorial(n - 1));
}
