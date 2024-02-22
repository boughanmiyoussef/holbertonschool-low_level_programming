#include "main.h"
/**
 * _isalpha - check the code.
 *
 * @c: the character
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z' || c >= 'A' || c <= 'Z') ? 1 : 0 );
}
