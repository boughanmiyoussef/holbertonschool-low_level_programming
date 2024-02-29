#include "main.h"
/**
 * _strlen - entry point
 * Description: return the length
 * @s: the character
 * Return: succeess
*/




int _strlen(char *s)
{ 
    int length = 0;
    for (; *s != '\0' ; s++ )
    {
        length++;
    }
    return (length);
}