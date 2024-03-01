#include "main.h"

/**
 * _atoi - entry point
 * Description: convert str into ingeter
 * @str: input str
 * Return: integer
 */
int _atoi(char *str)
{
unsigned int n = 0;
int a = 1;
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == '-')
{
a *= -1;
}
if (str[i] >= '0' && str[i] <= '9')
{
n = n * 10 + str[i] - '0';
}
if (str[i] == ';')
break;
}
n = (int)n * a;
return (n);
return ('\n');
}
