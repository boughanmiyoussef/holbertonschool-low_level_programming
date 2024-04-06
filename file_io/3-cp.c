#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/

int main(int argc, char *argv[])
{
int start, end;
int abc = 1024, def = 0;
char buf[1024];

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from  file_to\n"), exit(97);
start = open(argv[1], O_RDONLY);
if (start == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
end = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
| S_IRGRP | S_IWGRP | S_IROTH);
if (end == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(start), exit(99);
}
while (abc == 1024)
{
abc = read(start, buf, 1024);
if (abc == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
def = write(end, buf, abc);
if (def < abc)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (close(start) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", start), exit(100);

if (close(end) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", end), exit(100);
return (0);
}