#include "main.h"
/**
 * print_numbers - the function the print the numbers from 0 to 9
 * Description: print the numbers 
 * Return: void
*/
void print_numbers(void)
{
int i;
    for (i = 0; i <= 9; i++)
    {
        _putchar(i + 48);
    }
    _putchar('\n');
}
