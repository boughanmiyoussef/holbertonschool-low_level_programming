#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters and initializes it.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 * Return: If memory allocation fails or if size is 0, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
str[i] = c;
}
return (str);
}















char *create_array(unsigned int size, char c)
{

    char *youssef;
    unsigned int i;

    youssef = malloc(sizeof(char) * size);
    if (youssef == NULL || size == NULL)
    return (NULL);

    for (i = 0; i < size; i++)
    youssef[i] = c;


    return (youssef);



}
