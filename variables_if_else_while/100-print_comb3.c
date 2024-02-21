#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'print combo '
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int left_digit;
int right_digit;
for (left_digit = 0 ; left_digit <=8 ; left_digit++)
{
for (right_digit = left_digit + 1; right_digit <= 9; right_digit++)
{
putchar(left_digit + '0');  
putchar(right_digit + '0'); 
if (left_digit != 8 || right_digit != 9) 
{
putchar(','); 
putchar(' '); 
}  
}
}
return (0);
}
