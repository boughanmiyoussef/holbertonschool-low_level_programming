#include "main.h"
/**
 * more_numbers - print numbers 
 * Description: print numbers form 0 to 14
 * Return: void
*/
void more_numbers(void)
{
    int abc;
    int def;
    for (abc = 0; abc < 10; abc++)
    {
        for (def = 0; def <= 14; def++)
        {
            if (def > 9) {
                _putchar((def / 10) + '0'); 
            }
            _putchar((def % 10) + '0'); 
        }
        _putchar('\n');
    }
}
