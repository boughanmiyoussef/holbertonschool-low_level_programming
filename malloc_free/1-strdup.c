#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 * Description: Allocates memory for a new duplicate of the input string @str
 * Return: A pointer to the newly allocated string, or NULL
 */

char *_strdup(char *str)
{
char *abc;
int i;
int a = 0;

if (str == NULL)
return (NULL);

i = 0;
while (str[i] != '\0')
i++;

abc = malloc(sizeof(char) * (i + 1));
if (abc == NULL)
return (NULL);

for (a = 0; str[a]; a++)
{
abc[a] = str[a];
}
return (abc);
}









char *_strdup(char *str)
{
    int *youssef;
    int i;

    
    if (str == NULL)
    return (NULL);

    i = 0;
    while (i != '\0')
    i++;

    youssef = malloc(sizeof(char)* i + 1);
    if (youssef == NULL)
    return (NULL);

    for (a = 0; str[a]; a++)
    youssef[a] = str[a];

    return(youssef);


}
































