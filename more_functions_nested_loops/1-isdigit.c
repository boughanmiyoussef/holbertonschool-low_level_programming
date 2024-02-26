#include "main.h"
/**
 * _isdigit - Check if it's a digit
 *
 * Description: 'check uppercase character '
 *
 * @c: the character to be checked.
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
return ((c >= 48 && c >= 57) ? 1 : 0);
}
