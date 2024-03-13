#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatentates two strings using the newly allocated memory
* @s1: first string
* @s2: second string
* @n: unsigned int
* Return: a pointer to 2 string concat..
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int a, b;
unsigned int c;
char *youssef;

a = 0;
b = 0;
c = 0;

if (s1 == NULL)
s1 = "";
	
if (s2 == NULL)
s2 = "";

while (s1[a])
a += 1;
	
youssef = malloc(a + n + 1);
if (youssef == NULL)
return (NULL);

while (s1[b])
{
youssef[b] = s1[b];
b += 1;
}

while (c < n)
{
youssef[b + c] = s2[c];
c += 1;
}

youssef[b + c] = '\0';

return (youssef);
}