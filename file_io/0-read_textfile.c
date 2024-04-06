#include "mainh"
/**
 * read_textfile - function name
 * @filename: The file's name.
 * @letters: The file's length.
 * Return: 1 or -1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *xyz = NULL;
int abc, def, error = -1;

if (filename)
{
abc = open(filename, O_RDONLY);
xyz = malloc(sizeof(char) * letters);
if (abc > 0 && xyz)
{
def = read(abc, xyz, letters);
if (def >= 0 && (size_t)def <= letters)
error = write(STDOUT_FILENO, xyz, def);
close(abc);
}
}
free(xyz);
return ((error >= 0 && error == def) ? error : 0);
}
