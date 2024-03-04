#include "main.h"
/**
 * _strcat - enrty point
 * @dest: string
 * @src: string
 *
 * Return: success
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0')
{jj
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
