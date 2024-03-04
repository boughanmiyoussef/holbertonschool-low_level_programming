#include "main.h"
/**
 * *_mempcy - entry point
 * Description: function copies n bytes from memory area src to memory area dest
 * @dest: string Destination
 * @src: string to be copied
 * @n: size of the memory 
 * Return: Pointer To Dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    while ( src[i] != '\0' && i < n)
    {
        dest[i]=src[i];
        i++;
    }
    while (i < n) 
    {
     dest[i] = '\0';
     i++;
    }
    return (dest);
}