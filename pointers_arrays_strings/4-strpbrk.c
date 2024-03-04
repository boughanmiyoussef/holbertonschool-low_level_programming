#include "main.h"
/**
 * _strpbrk - function name
 * @s: first parameter
 * @accept: second parameter
 * Description: searches a string for any of a set of bytes.
 * Return : success
*/
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return ('\0');
}
