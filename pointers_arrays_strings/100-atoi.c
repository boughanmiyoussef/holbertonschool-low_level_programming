#include "main.h"

/**
 * _atoi - entry point
 * Description: convert str into ingeter
 * @str: input str
 * Return: integer
 */
int _atoi(char *str)
{
int n = 0; 
int a = 1; 
int i = 0; 

if (str[0] == '-')
{
a = -1;
i++;
}
while (str[i])
{
n = n * 10 + str[i] - '0';
i++;
}
return (a * n);
}