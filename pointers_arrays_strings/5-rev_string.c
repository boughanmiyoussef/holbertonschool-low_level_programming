#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
int len = 0;
int j;
char temp;
while (s[len] != '\0')
{
len++;
}
for (j = 0; j < len / 2; j++) 
{
temp = s[j];
s[j] = s[len - j - 1];
s[len - j - 1] = temp;
}
}
