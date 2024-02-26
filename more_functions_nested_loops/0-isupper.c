#include "main.h"
/**
 * _isupper - Check if the character is uppercase
 *
 * Description: 'check uppercase character '
 *
 * @c: the character to be checked.
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
