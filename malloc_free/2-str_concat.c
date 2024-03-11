#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: Destination string.
 * @s2: Source string.
 * Return: Pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
int abc = 0;
int def = 0;

while (*(s1 + abc) != '\0')
{
abc++;
}

while (*(s2 + def) != '\0')
{
*(s1 + abc) = *(s2 + def);
abc++;
def++;
}

*(s1 + abc) = '\0';

return (s1);
}
