#include "main.h"
#include <stddef.h>
/**
 * *_strchr - entry point
 * @s: string
 * @c: character
 * Description: Locates a character in a string.
 * Return: character
*/
char *_strchr(char *s, char c)
{
while(*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if(c == '\0')
{
return (s);
}                       
return (NULL);
}
