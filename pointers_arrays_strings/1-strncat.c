#include "main.h"
/**
 * _strncat - entry point
 * @dest: string
 * @src: string
 * @n: number
 *
 * Return: success
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
j = 0;

while (dest[i] != '\0')
i++;

while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
