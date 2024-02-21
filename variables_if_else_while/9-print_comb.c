#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry Point
 * 
 * description: 'print combo'
 * 
 * Return: Always success 0 
*/
int main(void)
{
int nbr;
for (nbr = 0; nbr < 10; nbr++){
putchar(nbr + '0');
if(nbr < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return(0);
}

