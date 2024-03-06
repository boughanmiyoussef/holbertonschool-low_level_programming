#include "main.h"
/**
 * _strlen_recursion - function name
 * Description: returns the length of a string.
 * @s: string
 * Return: Length of the string
*/

int _strlen_recursion(char *s)
{
if (*s == 0)
{
return (0);
}
return (_strlen_recursion(s + 1) + 1);
}
