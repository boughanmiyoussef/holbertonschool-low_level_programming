#include "main.h"

/**
 * my_int_printer - function name
 *
 * @args: argument.
 *
 * Return: int
 */

int my_int_printer(va_list args)
{
int decimalNumber = 1;
int j = 0;
long int digit = va_arg(args, int);
long int tempNumber;

if (digit < 0)
	
{
j += _putchar('-');
digit *= -1;
	
}

if (digit < 10)
return (j += _putchar(digit + '0'));

tempNumber = digit;

while (tempNumber > 9)
	
{
decimalNumber *= 10;
tempNumber /= 10;
}
	
while (decimalNumber >= 1)

{
j += _putchar(((digit / decimalNumber) % 10) + '0');
decimalNumber /= 10;
}

return (j);
}
