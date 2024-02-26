#include "main.h"
/**
 * main - Entry point
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
