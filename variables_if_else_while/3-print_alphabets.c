#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * 
 * description - alphabet lowercase and uppercarse
 * 
 * Return: always 0 
 */
int main(void)
{
char alphabet;
char ALPHABET;
for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
{
putchar(alphabet);
}
for (ALPHABET = 'A' ; ALPHABET <= 'Z' ; ALPHABET++)
{
putchar(ALPHABET);
}
putchar('\n');
return (0);
}
