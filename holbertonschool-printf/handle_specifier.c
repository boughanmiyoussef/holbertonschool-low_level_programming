#include "main.h"

/**
 * handle_specifier - function name.
 *
 * @format_specifier: Conversion specifiers.
 * @args: arguments.
 *
 * Return: char count.
 */

int handle_specifier(char format_specifier, va_list args)
{
    int i = 0, j = 0;

format_handler_t format_handlers[] = {
{'d', my_int_printer},
{'c', my_char_printer},
{'%', my_modulo_printer},
{'r', my_reverse_string_printer},
{'i', my_int_printer},
{'s', my_string_printer},
{0, NULL}
};

while (format_handlers[i].format)
{
if (format_specifier == format_handlers[i].format)
j += format_handlers[i].f(args);
i++;
}

if (j == 0)
{
j += _putchar('%');
j += _putchar(format_specifier);
}

return (j);
}
