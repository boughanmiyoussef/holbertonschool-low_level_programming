#include "main.h"

/**
 * _pow_recursion - function name
 * @x:integer
 * @y:integer
 * Description: returns the value of x raised to the power of y
 * Return: int
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return(1);
}
else
{
return x * _pow_recursion(x, y - 1); 
}
}
