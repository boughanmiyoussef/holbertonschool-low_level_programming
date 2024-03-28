#include "main.h"

/**
 * my_char_printer - function name
 *
 * @args: argument.
 *
 * Return: number of characters.
 */

int my_char_printer(va_list args)
{
char c = va_arg(args, int);
_putchar(c);

return (1);
}
