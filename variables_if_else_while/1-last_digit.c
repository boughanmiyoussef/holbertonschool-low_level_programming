#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'last digit'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last_digit_of_n;
last_digit_of_n = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (last_digit_of_n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", last_digit_of_n, n);
}
else if (last_digit_of_n == 0)
{
printf("Last digit of %d is %d and is 0\n", last_digit_of_n, n);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", last_digit_of_n, n);
}
}
