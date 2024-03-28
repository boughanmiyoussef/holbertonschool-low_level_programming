#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct format - struct for format specifier
 * @format - the format specifier character
 * @f: function pointer
 */
typedef struct format
{
    char format;
    int (*f)(va_list);
} format_t;

int printf_function(const char *format, ...);
int _putchar(char c);
int handle_specifier(char s, va_list args);
int my_char_printer(va_list args);
int my_string_printer(va_list args);
int my_int_printer(va_list args);
int my_modulo_printer(va_list args);
int my_reverse_string_printer(va_list args);

#endif
