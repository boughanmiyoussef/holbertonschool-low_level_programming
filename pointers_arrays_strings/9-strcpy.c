#include "main.h"

/**
 * *_strcpy - entry point
 * Description: that copies the string pointed to by src.
 * @dest: destination
 * @src: string
 * Return:  dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
while ((dest[i] = src[i]) != '\0')
{
i++;
}
return dest;
}
