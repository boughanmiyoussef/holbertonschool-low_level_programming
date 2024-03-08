#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: success (0)
 *
*/

int main(int argc, char *argv[])
{
if (argc == 3)
{
int x = atoi(argv[1]);
int y = atoi(argv[2]);
printf("%d" , x * y);
}
else
{
printf("Error\n");
}
return(0);
}