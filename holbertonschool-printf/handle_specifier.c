#include "main.h"

/**
 * handle_specifier - function name
 * @format_specifier: format specifier
 * @args: arguments
 * Return: int
 */
int handle_specifier(char format_specifier, va_list args)
{
int i = 0, j = 0;

format_t conversion[] = {
    
{'c', my_char_printer},
{'s', my_string_printer},
{'%', my_modulo_printer},
{'d', my_int_printer},
{'i', my_int_printer},
{'r', my_reverse_string_printer},
{0, NULL}

};

while (conversion[i].format)
 
{
      
if (format_specifier == conversion[i].format)
            
j += conversion[i].f(args);
i++;
   
}

if (j == 0)
{
j += _putchar('%');
j += _putchar(format_specifier);
}

return (j);
}
