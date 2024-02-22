#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    times_table();
    return (0);
}












#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void) {
    int row, column, product;

    /* Iterate through rows */
    for (row = 0; row <= 9; row++) {
        /* Iterate through columns */
        for (column = 0; column <= 9; column++) {
            /* Compute product */
            product = row * column;

            /* Print product */
            if (column > 0) {
                _putchar(',');
                if (product < 10) {
                    _putchar(' ');
                }
                _putchar(' ');
            }
            if (product >= 10) {
                _putchar((product / 10) + '0');
            } else {
                _putchar(' ');
            }
            _putchar((product % 10) + '0');
        }
        /* Move to the next line */
        _putchar('\n');
    }
}
