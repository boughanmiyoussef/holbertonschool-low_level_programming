#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * ConversionHandler - Struct for format
 * @specifiers: Struct format
 * @f: The function associated
 */

typedef struct ConversionHandler
{
char specifiers;
int (*f)(va_list);
} ConversionHandler_t;

int _printf(const char *format, ...);
int get_function(char s, va_list args);
int _putchar(char c);
int my_char_printer(va_list args);
int my_string_printer(va_list args);
int my_int_printer(va_list args);
int my_modulo_printer(va_list args);
int my_reverse_string_printer(va_list args);

#endif
