#include "main.h"

/**
 * _str_concat - function,
 * @dest: destination.
 * @src: source.
 * Return: dest.
*/

char *str_concat(char *s1, char *s2)
{
int abc = 0;
int def = 0;
while (*(s1 + abc) != '\0')
{
abc++;
}
while (def >= 0)
{
*(s1 + abc) = *(s2 + def);
if (*(s2 + def ) == '\0')
break;
abc++;
def++;
}
return(s1);
}
