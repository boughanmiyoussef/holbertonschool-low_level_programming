#include "main.h"
/**
 * print_rev - entry point
 * Description: prints a string in reverse 
 * @s: the character
 * 
*/
void print_rev(char *s)
{
int length = 0;
    while (*s != '\0')
    {
        length++;
        s++;
    }
for (int i = length - 1; i >= 0; i--)
    {
    printf("%c", *(s + i));
    }
    printf("\n");
}

