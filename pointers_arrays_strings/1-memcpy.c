#include "main.h"
/**
 * _memcpy - entry point
 * Description: copies n bytes from memory area src to memory area dest
 * @dest: string Destination
 * @src: string to be copied
 * @n: size of the memory
 * Return: Pointer To Dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
