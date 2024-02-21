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
int num1_10, num1_1, num2_10, num2_1;
for (num1_10 = 0; num1_10 <= 9; num1_10++)
{
for (num1_1 = 0; num1_1 <= 9; num1_1++)
{
for (num2_10 = num1_10; num2_10 <= 9; num2_10++)
{
for (num2_1 = (num2_10 == num1_10) ? num1_1 + 1 : 0; num2_1 <= 9; num2_1++)
{
putchar(num1_10 + '0');
putchar(num1_1 + '0');
putchar(' ');
putchar(num2_10 + '0');
putchar(num2_1 + '0');
if (!(num1_10 == 9 && num1_1 == 8 && num2_10 == 9 && num2_1 == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
