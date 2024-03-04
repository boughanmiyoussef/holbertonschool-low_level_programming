#include "main.h"
#include <stddef.h>
/**
 * *_strstr - entry point
 * @s: first parameter
 * @accept: second parameter
 * Description: locates a substring.
 * Return: Always Succes
*/

char *_strstr(char *s, char *accept)
{
 while (*s != '\0')
 {
    const char *a = accept;
    while (*a != '\0')
    {
        if ( *s == *a)
        return (s);
    a++;
    }
    s++;
 }
 return (NULL);
}