#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: success
 */
char *str_concat(char *s1, char *s2)
{
char *new;
int i, j = 0,   size = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] || s2[i]; i++)
size++;

new = malloc(sizeof(char) * size);

if (new == NULL)
return (NULL);

for (i = 0; s1[i]; i++)
new[j++] = s1[i];

for (i = 0; s2[i]; i++)
new[j++] = s2[i];

return (new);
}












char *str_concat(char *s1, char *s2)
{
    char *youssef;
    int i;
    int j = 0;
    int size = 0;

    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    s2 = "";

    for(i = 0; s1[i] || s2[i]; i++)
    {
        size++;
    }
    youssef = malloc(sizeof(char) * size);
    if (youssef == NULL)
    return(NULL);


    for(i = 0; s1[i]; i++)
    youssef[j++] = s1[i];

    for (i = 0; s2[i]; i++)
    youssef(j++) = s2[i];
}   