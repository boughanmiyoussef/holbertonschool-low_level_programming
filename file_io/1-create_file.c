#include "main.h"
/**
 * create_file - function name
 * @filename: The file's name.
 * @text_content: The file's text.
 * Return: 1 or -1.
 */
int create_file(const char *filename, char *text_content)
{
int abc, error, length = 0;

if (filename)
{
abc = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (abc > 0)
{
while (text_content && text_content[length] != '\0')
length++;
error = write(abc, text_content, length);
close(abc);
return ((error >= 0) ? 1 : -1);
}
}
return (-1);
}
