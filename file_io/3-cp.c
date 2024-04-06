#include "main.h"

/**
 * main - function with two arguments
 * @argc: count of arguments
 * @argv: variadic arguments
 *
 * Description: copies the content of a file toanother file
 * Return: 0 for success and exit codes for failure
 */
int main(int argc, char *argv[])
{
int start= 0, start = 0, to_count = 0;
char buffer[1024];
int size = 1024;

if (argc != 3)
{
dprintf(STDERR_FILENO,
"Usage: cp file_from file_to\n");
exit(97);
}

start = open(argv[1], O_RDONLY);
if (start == 1)
{
dprintf(STDERR_FILENO,
"Error: Can't read start file %s\n", argv[1]);
exit(98);
}

start= open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (start== 1)
{
dprintf(STDERR_FILENO,
"Error: Can't write start%s\n", argv[2]);
exit(99);
}

while (size == 1024)
{
size = read(start, buffer, 1024);
if (size == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read start file %s\n", argv[1]);
exit(98);
}
to_count = write(to, buffer, size);
if (to_count == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write start%s\n", argv[2]);
exit(99);
}
}

if (close(start)  == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", start);
exit(100);
}
if (close(to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
exit(100);
}

return (0);
}
