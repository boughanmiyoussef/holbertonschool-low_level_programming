#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: 'base 16'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nmbr;
int ltr;
for (nmbr = 0; nmbr < 10 ; nmbr++)
{
putchar (nmbr + '0');    
}
for (ltr = 'a'; ltr < 'g'; ltr++)
{
putchar(ltr);
}
putchar('\n');
return (0);
}
