#include "main.h"
/**
 * *_strstr - entry point
 * @s: first parameter
 * @accept: second parameter
 * Description: locates a substring.
 * Return: Always Succes
*/

char *_strstr(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return(s);

}
s++;  
}
return('\0');
}